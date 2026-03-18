/*
 * XREFs of DpiCallDrvSetBrightness @ 0x1C02A82F0
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02A68C0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C02A78E0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C0035760 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiCallDrvSetBrightness(_QWORD *Arg0, unsigned __int8 a2)
{
  _QWORD *v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // r8
  unsigned __int8 v9; // si
  __int64 (__fastcall *v10)(__int64, __int64, __int64, _QWORD *); // rax
  __int64 v11; // rcx
  unsigned int Arg3; // ebx
  const GUID *v13; // r8

  v4 = 0LL;
  v5 = Arg0[8];
  v6 = 0LL;
  v7 = *(_WORD *)(v5 + 4754);
  v8 = v5 + 4752;
  if ( v7 == 2 )
    v6 = (_QWORD *)(v5 + 4752);
  if ( v7 == 1 )
    v4 = (_QWORD *)(v5 + 4752);
  if ( (!v6 || !v6[4]) && (!v4 || !v4[4]) )
    return 3221225659LL;
  v9 = *(_BYTE *)(v5 + 4384);
  if ( v6 && v6[4] )
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v6[5];
    v11 = v6[1];
  }
  else
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v4[5];
    v11 = v4[1];
  }
  LOBYTE(v5) = a2;
  Arg3 = v10(v11, v5, v8, v4);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)v9, &EventBrightness, v13, Arg0, v9, a2, Arg3);
  return Arg3;
}
