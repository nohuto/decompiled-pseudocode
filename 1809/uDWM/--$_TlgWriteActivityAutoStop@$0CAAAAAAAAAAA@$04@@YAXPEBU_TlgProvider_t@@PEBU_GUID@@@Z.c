/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18007F30C
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007F460 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18007F460.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 */

int __fastcall _TlgWriteActivityAutoStop<35184372088832,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  __int64 v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*((_QWORD *)a1 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)a1 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)a1 + 3) )
      LODWORD(v2) = TlgWrite(a1, &unk_1800C295B, a2, 0LL, 2u, &pData);
  }
  return v2;
}
