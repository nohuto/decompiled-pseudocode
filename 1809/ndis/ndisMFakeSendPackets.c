/*
 * XREFs of ndisMFakeSendPackets @ 0x1C0062830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisFreePaddedMdl @ 0x1C005613C (ndisFreePaddedMdl.c)
 */

void __fastcall ndisMFakeSendPackets(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // rbp

  v3 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x5Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v3);
  v7 = -1073741823;
  if ( v3 )
    v7 = *(_DWORD *)(v3 + 540);
  if ( (v7 & 0xC0230000) == 0xC0230000 )
    v7 = (unsigned __int16)v7 | 0xC0010000;
  if ( (_DWORD)v5 )
  {
    v8 = v5;
    do
    {
      v9 = *a2;
      if ( (*(_BYTE *)(v3 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 128) )
        ndisFreePaddedMdl(*a2);
      *(_BYTE *)(v9 + 41) &= 0xC0u;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 680))(*(_QWORD *)(a1 + 32), v9, v7);
      ++a2;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x5Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v3);
}
