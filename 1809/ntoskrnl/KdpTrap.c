/*
 * XREFs of KdpTrap @ 0x14091A518
 * Callers:
 *     KdTrap @ 0x1400A332C (KdTrap.c)
 *     KdpStub @ 0x1400A3360 (KdpStub.c)
 * Callees:
 *     KdpReport @ 0x14028CCF0 (KdpReport.c)
 *     KdpCommandString @ 0x140919164 (KdpCommandString.c)
 *     KdpPrint @ 0x140919224 (KdpPrint.c)
 *     KdpPrompt @ 0x140919398 (KdpPrompt.c)
 *     KdpSymbol @ 0x140919500 (KdpSymbol.c)
 */

char __fastcall KdpTrap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  char v6; // dl
  bool v8; // zf
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v6 = 0;
  v8 = *(_DWORD *)a3 == -2147483645;
  LOBYTE(v20) = 0;
  if ( !v8 )
    return KdpReport(a1, 0LL, (int *)a3, a4, v18, a6);
  v9 = *(_QWORD *)(a3 + 32);
  if ( !v9 )
    return KdpReport(a1, 0LL, (int *)a3, a4, v18, a6);
  v10 = *(_QWORD *)(a4 + 248);
  if ( v9 <= 5 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              goto LABEL_15;
            KdpCommandString(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), a5, a4, a1);
            goto LABEL_13;
          }
          v6 = 1;
        }
        KdpSymbol(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), v6, a5, a4, a1);
      }
      else
      {
        *(_QWORD *)(a4 + 120) = (unsigned __int16)KdpPrompt(
                                                    *(_QWORD *)(a4 + 128),
                                                    *(_WORD *)(a4 + 136),
                                                    *(volatile void **)(a4 + 184),
                                                    *(_WORD *)(a4 + 192),
                                                    a5,
                                                    a1);
      }
LABEL_13:
      v6 = 1;
      goto LABEL_15;
    }
    v15 = KdpPrint(
            *(_DWORD *)(a4 + 184),
            *(_DWORD *)(a4 + 192),
            *(_QWORD *)(a4 + 128),
            *(_WORD *)(a4 + 136),
            a5,
            a1,
            v19,
            &v20);
    v6 = v20;
    *(_QWORD *)(a4 + 120) = v15;
  }
LABEL_15:
  v16 = *(_QWORD *)(a4 + 248);
  if ( v16 == v10 )
    *(_QWORD *)(a4 + 248) = v16 + 1;
  return v6;
}
