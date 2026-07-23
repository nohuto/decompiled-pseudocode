/*
 * XREFs of AVrfpDllUnloadNotificationInternal @ 0x1800DBD18
 * Callers:
 *     AVrfDllUnloadNotification @ 0x1800DAC24 (AVrfDllUnloadNotification.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpDllUnloadNotificationInternal(__int64 a1)
{
  __int64 *v2; // rbx
  const wchar_t **v3; // rbp
  unsigned int v4; // r15d
  const wchar_t **v5; // rsi
  __int64 v6; // rdi
  const wchar_t *v7; // rdx
  char v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  const wchar_t *v11; // rax
  unsigned __int64 v12; // rcx

  if ( AVrfpEnabled )
  {
    v2 = (__int64 *)AVrfpVerifierProvidersList;
    while ( v2 != &AVrfpVerifierProvidersList )
    {
      v3 = (const wchar_t **)v2[5];
      v4 = 0;
      v2 = (__int64 *)*v2;
      if ( *v3 )
      {
        v5 = v3;
        v6 = 0LL;
        do
        {
          if ( ((_BYTE)v5[1] & 1) != 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), *v5) )
          {
            if ( (AVrfpDebug & 4) != 0 )
              DbgPrint(
                "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
                *(_QWORD *)(a1 + 96));
            v7 = v5[3];
            v8 = 0;
            LODWORD(v9) = 0;
            v10 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64);
            if ( *(_QWORD *)v7 )
            {
              v11 = v5[3];
              do
              {
                v12 = *((_QWORD *)v11 + 1);
                if ( v12 >= *(_QWORD *)(a1 + 48) && v12 < v10 )
                {
                  *((_QWORD *)v11 + 1) = 0LL;
                  v8 = 1;
                }
                v9 = (unsigned int)(v9 + 1);
                v11 = &v7[12 * v9];
              }
              while ( *(_QWORD *)v11 );
            }
            if ( v8 )
              LODWORD(v3[4 * v6 + 1]) &= ~1u;
          }
          v5 = &v3[4 * ++v4];
          v6 = v4;
        }
        while ( *v5 );
      }
    }
  }
  return 0LL;
}
