/*
 * XREFs of GreExtEscape @ 0x1C0098E04
 * Callers:
 *     NtGdiExtEscape @ 0x1C008BDD0 (NtGdiExtEscape.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00E2D90 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025F2C8 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v14[2]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v15[32]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v16[32]; // [rsp+98h] [rbp+7h] BYREF
  int v17; // [rsp+B8h] [rbp+27h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v10 = 0;
  if ( v12[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v12, a2, a3, a4, a5, a6);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v14, a1);
    if ( v14[0] )
      v10 = GreExtEscapeInternal((struct DCOBJ *)v14, a2, a3, a4, a5, a6);
    if ( v17 )
      PopThreadGuardedObject(v16);
    MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v13);
  return v10;
}
