/*
 * XREFs of ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002B718
 * Callers:
 *     VidSchiSetPriorityContext @ 0x1C0012490 (VidSchiSetPriorityContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateReadyBitsInNewPriority(struct _VIDSCH_NODE *a1, struct _VIDSCH_CONTEXT *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  unsigned __int64 v5; // r10

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a2 + 101);
  if ( *((struct _VIDSCH_NODE **)a1 + 2 * v4 + 253) == (struct _VIDSCH_NODE *)((char *)a1 + 16 * v4 + 2024) )
  {
    v5 = *((unsigned __int16 *)a1 + 2);
    *((_DWORD *)a1 + 438) |= 1 << v4;
    if ( !_bittest64(*(const signed __int64 **)(v2 + 480), v5)
      && ((-1 << *((_DWORD *)a2 + 101)) & *((_DWORD *)a1 + 439)) == 0
      && !*((_DWORD *)a1 + 717) )
    {
      RtlSetBitEx(v2 + 472, (unsigned int)v5);
    }
  }
}
