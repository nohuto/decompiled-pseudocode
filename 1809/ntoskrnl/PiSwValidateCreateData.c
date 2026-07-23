/*
 * XREFs of PiSwValidateCreateData @ 0x1406D8610
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpValidateMultiSz @ 0x14068C658 (PnpValidateMultiSz.c)
 *     SeValidSecurityDescriptor @ 0x14069E910 (SeValidSecurityDescriptor.c)
 *     PiSwIsValidPnpId @ 0x1406D8898 (PiSwIsValidPnpId.c)
 *     PiSwValidatePropertyArray @ 0x1406D8EB0 (PiSwValidatePropertyArray.c)
 */

__int64 __fastcall PiSwValidateCreateData(__int64 a1)
{
  unsigned int v2; // esi
  _WORD *v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  _WORD *v7; // r9
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rdx
  ULONG v21; // ecx
  __int64 v22; // rcx
  __int64 v24; // rdx
  _WORD *i; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  _WORD *j; // r9
  __int64 v30; // rax
  __int64 v31; // r9

  v2 = -1073741811;
  if ( a1 )
  {
    v3 = *(_WORD **)(a1 + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = -1LL;
        v5 = -1LL;
        do
          ++v5;
        while ( v3[v5] );
        if ( v5 <= 0xC7 )
        {
          if ( *(_QWORD *)a1 )
          {
            if ( **(_WORD **)a1 )
            {
              if ( (unsigned __int8)PiSwIsValidPnpId(*(_QWORD *)a1, 0LL) )
              {
                v7 = *(_WORD **)(a1 + 16);
                if ( v7 )
                {
                  if ( *v7 )
                  {
                    if ( (unsigned __int8)PiSwIsValidPnpId(*(_QWORD *)(a1 + 16), v6) )
                    {
                      v11 = -1LL;
                      do
                        ++v11;
                      while ( *(_WORD *)(v8 + 2 * v11) );
                      v12 = -1LL;
                      do
                        ++v12;
                      while ( *(_WORD *)(v9 + 2 * v12) );
                      if ( v11 + v12 + 5 <= v10 && (*(_DWORD *)(a1 + 64) & 0xFFFFFFF0) == 0 )
                      {
                        v13 = *(_DWORD *)(a1 + 24);
                        if ( v13 <= 0x3FF && (v13 || !*(_QWORD *)(a1 + 32)) )
                        {
                          v14 = *(_QWORD *)(a1 + 32);
                          if ( v14 )
                          {
                            if ( (int)PnpValidateMultiSz(v14, *(unsigned int *)(a1 + 24)) < 0 )
                              return v2;
                            for ( i = *(_WORD **)(a1 + 32); *i; i = (_WORD *)(v27 + 2 * v26 + 2) )
                            {
                              LOBYTE(v24) = 1;
                              if ( !(unsigned __int8)PiSwIsValidPnpId(i, v24) )
                                return v2;
                              v26 = -1LL;
                              do
                                ++v26;
                              while ( *(_WORD *)(v27 + 2 * v26) );
                            }
                          }
                          else if ( v13 )
                          {
                            return v2;
                          }
                          v15 = *(_DWORD *)(a1 + 40);
                          if ( v15 <= 0x3FF && (v15 || !*(_QWORD *)(a1 + 48)) )
                          {
                            v16 = *(_QWORD *)(a1 + 48);
                            if ( v16 )
                            {
                              if ( (int)PnpValidateMultiSz(v16, *(unsigned int *)(a1 + 40)) < 0 )
                                return v2;
                              for ( j = *(_WORD **)(a1 + 48); *j; j = (_WORD *)(v31 + 2 * v30 + 2) )
                              {
                                LOBYTE(v28) = 1;
                                if ( !(unsigned __int8)PiSwIsValidPnpId(j, v28) )
                                  return v2;
                                v30 = -1LL;
                                do
                                  ++v30;
                                while ( *(_WORD *)(v31 + 2 * v30) );
                              }
                            }
                            else if ( v15 )
                            {
                              return v2;
                            }
                            v17 = *(_QWORD *)(a1 + 72);
                            if ( !v17 )
                              goto LABEL_61;
                            v18 = -1LL;
                            do
                              ++v18;
                            while ( *(_WORD *)(v17 + 2 * v18) );
                            if ( v18 <= 0x7FFE )
                            {
LABEL_61:
                              v19 = *(_QWORD *)(a1 + 80);
                              if ( !v19 )
                                goto LABEL_34;
                              do
                                ++v4;
                              while ( *(_WORD *)(v19 + 2 * v4) );
                              if ( v4 <= 0x7FFE )
                              {
LABEL_34:
                                v20 = *(void **)(a1 + 96);
                                if ( v20 || !*(_DWORD *)(a1 + 88) )
                                {
                                  v21 = *(_DWORD *)(a1 + 88);
                                  if ( (v21 || !v20)
                                    && (!v20 || SeValidSecurityDescriptor(v21, v20))
                                    && ((*(_DWORD *)(a1 + 64) & 8) == 0 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 48)) )
                                  {
                                    v22 = *(_QWORD *)(a1 + 112);
                                    if ( (v22 || !*(_DWORD *)(a1 + 104)) && (*(_DWORD *)(a1 + 104) || !v22) )
                                      return (unsigned int)PiSwValidatePropertyArray();
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
