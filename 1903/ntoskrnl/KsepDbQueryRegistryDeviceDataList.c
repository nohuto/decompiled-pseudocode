/*
 * XREFs of KsepDbQueryRegistryDeviceDataList @ 0x140882F38
 * Callers:
 *     KseQueryDeviceDataList @ 0x140882810 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140154098 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1401540C0 (KsepPoolAllocatePaged.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     KsepRegistryOpenKey @ 0x14070CFC0 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14070D2C4 (KsepStringFree.c)
 *     KsepStringTransform @ 0x14074D168 (KsepStringTransform.c)
 *     KsepRegistryEnumValue @ 0x14088468C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140884788 (KsepRegistryQueryKeyInformation.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceDataList(_WORD *a1, char *a2, unsigned int a3, _DWORD *a4)
{
  ULONG v4; // r15d
  int KeyInformation; // ebx
  PVOID Paged; // r14
  unsigned int v8; // edi
  char *v9; // r12
  int v10; // eax
  size_t v11; // rbx
  HANDLE Handle[3]; // [rsp+30h] [rbp-30h] BYREF
  size_t Size; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  _WORD *v16; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  Handle[0] = 0LL;
  KeyInformation = KsepStringTransform((__int64)&v15, a1);
  if ( KeyInformation >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v16,
                Handle) >= 0 )
    {
      KeyInformation = KsepRegistryQueryKeyInformation(Handle[0]);
      if ( KeyInformation >= 0 )
      {
        Paged = KsepPoolAllocatePaged((size_t)Handle[1]);
        if ( Paged )
        {
          if ( KsepPoolAllocatePaged((size_t)Handle[2]) )
          {
            v8 = 0;
            v9 = a2;
            while ( 1 )
            {
              v10 = KsepRegistryEnumValue(Handle[0], v4, (__int64)&Size);
              KeyInformation = v10;
              if ( v10 == -2147483622 )
                break;
              if ( v10 < 0 )
                goto LABEL_17;
              v11 = Size;
              v8 += Size;
              if ( v8 <= a3 )
              {
                memmove(v9, Paged, Size);
                v9 += v11;
              }
              ++v4;
            }
            *a4 = v8 + 2;
            if ( (unsigned __int64)v8 + 2 <= a3 )
            {
              KeyInformation = 0;
              *(_WORD *)&a2[2 * ((unsigned __int64)v8 >> 1)] = 0;
            }
            else
            {
              KeyInformation = -1073741789;
            }
          }
          else
          {
            KeyInformation = -1073741801;
          }
LABEL_17:
          KsepPoolFreePaged(Paged);
        }
        else
        {
          KeyInformation = -1073741801;
        }
      }
    }
    else
    {
      KeyInformation = -1073741275;
    }
    if ( Handle[0] )
    {
      ZwClose(Handle[0]);
      _InterlockedIncrement(dword_1404467DC);
    }
  }
  KsepStringFree(&v15);
  return (unsigned int)KeyInformation;
}
