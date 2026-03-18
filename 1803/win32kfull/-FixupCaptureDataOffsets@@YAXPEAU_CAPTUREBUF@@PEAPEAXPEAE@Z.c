/*
 * XREFs of ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0053774
 * Callers:
 *     xxxClientCallDevCallbackCapture @ 0x1C0006FC8 (xxxClientCallDevCallbackCapture.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00526D8 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0052A10 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0053734 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FixupCaptureDataOffsets(struct _CAPTUREBUF *a1, void **a2, unsigned __int8 *a3)
{
  if ( *((_QWORD *)a1 + 4) )
  {
    *a2 = a3;
  }
  else
  {
    *a2 = (void *)(a3 - (unsigned __int8 *)a1);
    *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a2 - (_DWORD)a1;
  }
}
