/*
 * XREFs of ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C021AC90
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003C824 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C003C864 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C021AF00 (-EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C021B0EC (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEnableHighPrecisionBrightness(unsigned __int8 a1, struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v4; // rcx
  int v5; // ebx
  PFILE_OBJECT *v6; // rdx
  LPMDisplayCtrl *v7; // rcx
  PERESOURCE Resource; // [rsp+38h] [rbp+10h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  if ( a2 )
  {
    if ( !FileObject || !LPMDisplayCtrl::HasRegisteredInternalDisplay(v4) )
    {
      v5 = -1073741661;
      goto LABEL_12;
    }
    if ( !*((_DWORD *)v6 + 7) )
    {
      v5 = LPMDisplayCtrl::Initialize(v7);
      if ( v5 < 0 )
        goto LABEL_12;
      v6 = FileObject;
    }
    if ( *v6 )
      v5 = LPMDisplayCtrl::EnableHighPrecisionBrightness(v7, a1, (const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *)a2);
    else
      v5 = -1073741766;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_12:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
