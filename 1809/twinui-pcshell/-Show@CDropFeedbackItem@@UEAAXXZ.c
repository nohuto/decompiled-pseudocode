/*
 * XREFs of ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x180377C40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180377F08 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     McTemplateU0qdddd @ 0x180378848 (McTemplateU0qdddd.c)
 */

void __fastcall CDropFeedbackItem::Show(CDropFeedbackItem *this)
{
  int v2; // ecx

  CDropFeedbackItem::_Update(this, 0LL, 0LL);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0qdddd(
      v2,
      (unsigned int)&DropFeedbackItem_Show_Info,
      *((_DWORD *)this + 8),
      *((_DWORD *)this + 31),
      *((_DWORD *)this + 32),
      *((_DWORD *)this + 33),
      *((_DWORD *)this + 34));
}
