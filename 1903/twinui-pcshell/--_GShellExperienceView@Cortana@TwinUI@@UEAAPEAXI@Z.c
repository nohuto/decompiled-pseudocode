/*
 * XREFs of ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x18017D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18017D640 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 */

TwinUI::Cortana::ShellExperienceView *__fastcall TwinUI::Cortana::ShellExperienceView::`scalar deleting destructor'(
        TwinUI::Cortana::ShellExperienceView *this,
        char a2)
{
  TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
