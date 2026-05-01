/*
 * XREFs of ??0CExperienceManagerAnimationHelper@@QEAA@H@Z @ 0x180174990
 * Callers:
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18030CBC0 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CExperienceManagerAnimationHelper *__fastcall CExperienceManagerAnimationHelper::CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this,
        int a2)
{
  CExperienceManagerAnimationHelper *result; // rax

  *(_BYTE *)this = 0;
  result = this;
  *((_DWORD *)this + 1) = a2;
  *(GUID *)((char *)this + 8) = GUID_NULL;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
