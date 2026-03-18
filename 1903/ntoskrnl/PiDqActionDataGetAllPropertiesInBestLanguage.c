/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408650AC
 * Callers:
 *     PiDqActionDataCreate @ 0x1405B7104 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1405B76F4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqOpenObjectRegKey @ 0x140666F54 (PiDqOpenObjectRegKey.c)
 *     PiDqGrowPropertyArray @ 0x14071E074 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140865790 (PiDqPnPGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  void *v8; // rbx
  int v9; // r13d
  int v10; // r15d
  int v11; // edi
  int v12; // r9d
  unsigned int *v13; // rsi
  unsigned int v14; // eax
  const void **v15; // r12
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // r14d
  __int64 v19; // rax
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF

  Handle = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v9 = a4;
  v10 = 0;
  if ( a2 != 1 )
    v10 = a3;
  v11 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, &Handle);
  if ( v11 >= 0 )
  {
    v11 = PiDqPnPGetObjectPropertyKeys(v9, v10, (_DWORD)Handle, v12, (__int64)&v22, (__int64)&v24);
    if ( v11 >= 0 )
    {
      v13 = a7;
      v14 = v24;
      v15 = a6;
      v16 = *a7;
      v17 = *a7 + v24;
      if ( *a8 < v17 )
      {
        *a8 = v17;
        v11 = PiDqGrowPropertyArray(v15, v16, v17);
        if ( v11 < 0 )
          goto LABEL_13;
        v14 = v24;
      }
      v18 = 0;
      if ( v14 )
      {
        v19 = *v13;
        v8 = v22;
        do
        {
          v11 = PiDqPnPGetObjectPropertyInBestLocale(
                  v9,
                  v10,
                  (int)Handle,
                  (unsigned int)v8 + 20 * v18,
                  a2,
                  (const wchar_t *)a5,
                  (char *)*v15 + 48 * v19);
          if ( v11 < 0 )
            break;
          ++*v13;
          ++v18;
          v19 = *v13;
        }
        while ( v18 < v24 );
        goto LABEL_14;
      }
    }
LABEL_13:
    v8 = v22;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x58706E50u);
  return (unsigned int)v11;
}
