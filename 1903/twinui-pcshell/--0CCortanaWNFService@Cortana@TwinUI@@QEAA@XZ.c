/*
 * XREFs of ??0CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x1801D2014
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801D09BC (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
TwinUI::Cortana::CCortanaWNFService *__fastcall TwinUI::Cortana::CCortanaWNFService::CCortanaWNFService(
        TwinUI::Cortana::CCortanaWNFService *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = &TwinUI::Cortana::CCortanaWNFService::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  *((_BYTE *)v2 + 16) = 0;
  v2[5] = 0LL;
  v2[6] = 7LL;
  *((_WORD *)v2 + 12) = 0;
  *((_QWORD *)this + 8) = v2;
  return this;
}
