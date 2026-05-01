/*
 * XREFs of CrmRegistrationStart @ 0x18003BB4C
 * Callers:
 *     CrmSrvRegister @ 0x18003B978 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x1800460D4 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmLogRegistrationStart @ 0x18003BBB8 (CrmLogRegistrationStart.c)
 *     CrmGlobalsRegistrationAdd @ 0x18003BC68 (CrmGlobalsRegistrationAdd.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3)
{
  signed __int64 v5; // rax
  ULONG v7; // eax

  v5 = _InterlockedIncrement64(&qword_18009BC48);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v5;
  if ( a2 )
  {
    v7 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v7);
  }
  CrmGlobalsRegistrationAdd(a1);
  CrmLogRegistrationStart(a1);
  return 0LL;
}
