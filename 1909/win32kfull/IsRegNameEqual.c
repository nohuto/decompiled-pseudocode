/*
 * XREFs of IsRegNameEqual @ 0x1C029213C
 * Callers:
 *     bNotIsKeySymbolicLink @ 0x1C011D0B0 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

__int64 __fastcall IsRegNameEqual(HANDLE KeyHandle, HANDLE a2, _DWORD *a3)
{
  unsigned int *v6; // rdi
  ULONG v7; // ecx
  unsigned int v8; // eax
  size_t v9; // rcx
  char *v10; // rax
  char *v11; // rsi
  NTSTATUS v12; // ebx
  unsigned __int16 *v13; // rax
  signed __int64 v14; // rsi
  int v15; // edx
  int v16; // ecx
  ULONG Length; // [rsp+70h] [rbp+18h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0;
  v6 = 0LL;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  ZwQueryKey(a2, KeyNameInformation, 0LL, 0, &ResultLength);
  if ( Length + 2 < Length )
    return 0;
  v7 = ResultLength + 2;
  if ( ResultLength + 2 < ResultLength )
    return 0;
  ResultLength += 2;
  if ( Length + 5 < Length + 2 )
  {
    return 0;
  }
  else
  {
    v8 = (Length + 5) & 0xFFFFFFFC;
    v9 = v8 + v7;
    Length = v8;
    if ( (unsigned int)v9 >= v8 && (v10 = (char *)PALLOCMEM2(v9, 1718382187LL, 1), (v6 = (unsigned int *)v10) != 0LL) )
    {
      v11 = &v10[Length];
      v12 = ZwQueryKey(KeyHandle, KeyNameInformation, v10, Length, &Length);
      if ( v12 >= 0 )
      {
        *((_WORD *)v6 + ((unsigned __int64)*v6 >> 1) + 2) = 0;
        v12 = ZwQueryKey(a2, KeyNameInformation, v11, ResultLength, &ResultLength);
        if ( v12 >= 0 )
        {
          *(_WORD *)&v11[2 * ((unsigned __int64)*(unsigned int *)v11 >> 1) + 4] = 0;
          v13 = (unsigned __int16 *)(v6 + 1);
          v14 = v11 - (char *)v6;
          do
          {
            v15 = *(unsigned __int16 *)((char *)v13 + v14);
            v16 = *v13 - v15;
            if ( v16 )
              break;
            ++v13;
          }
          while ( v15 );
          *a3 = v16 == 0;
        }
      }
    }
    else
    {
      v12 = 0;
    }
    if ( v6 )
      Win32FreePool(v6);
  }
  return (unsigned int)v12;
}
