/*
 * XREFs of ndisUnsetNdis6OpenHandlers @ 0x1C0117C6C
 * Callers:
 *     ndisDeQueueOpenOnMiniport @ 0x1C0115AC4 (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // si
  bool v3; // bp
  unsigned __int8 v5; // r8
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x9Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v5 = *(_BYTE *)(a1 + 32);
  if ( !v1 )
    goto LABEL_19;
  do
  {
    v6 = *(_QWORD *)(v1 + 24);
    if ( !v2 )
      v2 = *(_BYTE *)(v6 + 56) >= 6u;
    if ( !v3 )
      v3 = *(_BYTE *)(v6 + 56) < 6u;
    v1 = *(_QWORD *)(v1 + 392);
  }
  while ( v1 );
  if ( !v2 )
  {
LABEL_19:
    if ( !*(_QWORD *)(a1 + 2064) )
    {
      *(_DWORD *)(a1 + 2256) = 0;
      v7 = *(_DWORD *)(a1 + 120);
      v8 = *(_QWORD *)(a1 + 2168);
      *(_QWORD *)(a1 + 1904) = v8;
      if ( (v7 & 0x20000000) != 0 )
        *(_QWORD *)(a1 + 432) = v8;
      if ( v5 < 6u )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 224LL);
        *(_QWORD *)(a1 + 2200) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 2192) = v9;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x9Fu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
}
