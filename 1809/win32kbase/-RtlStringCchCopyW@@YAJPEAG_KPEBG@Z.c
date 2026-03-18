/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0013D14
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0004E38 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     DrvGetHdevName @ 0x1C0013CE0 (DrvGetHdevName.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0013D60 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, 0x7FFFFFFEuLL);
  }
  return (unsigned int)v3;
}
