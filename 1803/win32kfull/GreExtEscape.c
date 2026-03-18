/*
 * XREFs of GreExtEscape @ 0x1C00F2DBC
 * Callers:
 *     NtGdiExtEscape @ 0x1C0081E90 (NtGdiExtEscape.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0117F68 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F2E58 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, int a2, int a3, char *a4, int a5, char *a6)
{
  unsigned int v10; // ebx
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+4Ch] [rbp-34h]
  _BYTE v17[32]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+70h] [rbp-10h]

  MDCOBJ::MDCOBJ((MDCOBJ *)v13, a1);
  v10 = 0;
  if ( v13[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v13, a2, a3, a4, a5, a6);
  }
  else
  {
    v15 = 0;
    v14 = 0LL;
    v18 = 0;
    v16 = 1;
    v12 = PushThreadGuardedObject(v17, &v14, XFERDCOBJ::ThreadCleanup);
    v18 = v12;
    if ( v12 )
    {
      XDCOBJ::vLock((XDCOBJ *)&v14, a1);
      v12 = v18;
    }
    if ( v14 )
    {
      v10 = GreExtEscapeInternal((struct DCOBJ *)&v14, a2, a3, a4, a5, a6);
      v12 = v18;
    }
    if ( v12 )
      PopThreadGuardedObject(v17);
    if ( v14 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v10;
}
