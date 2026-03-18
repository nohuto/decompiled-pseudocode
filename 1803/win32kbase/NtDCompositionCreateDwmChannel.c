/*
 * XREFs of NtDCompositionCreateDwmChannel @ 0x1C0142F00
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0010C44 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0147640 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 */

__int64 __fastcall NtDCompositionCreateDwmChannel(unsigned int *a1)
{
  int v2; // ebx
  _DWORD *v3; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a1 )
  {
    v3 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = *v3;
    v2 = 0;
    if ( !UserIsCurrentProcessDwm() )
      v2 = -1073741790;
    if ( v2 >= 0 )
    {
      v2 = DirectComposition::CDwmChannel::Create(&v5);
      if ( v2 >= 0 )
        *a1 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
