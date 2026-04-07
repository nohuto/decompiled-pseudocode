/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180088520
 * Callers:
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x18007A310 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     memcmp_0 @ 0x18004E27E (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::SetColorTransform(CVisual *this, const struct MilColorTransform *a2)
{
  unsigned int *v2; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v8 = 0LL;
  }
  else
  {
    v5 = CResource::Create(7u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v11);
    v2 = (unsigned int *)v11;
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 496LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_12;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**((_QWORD **)v11 + 2) + 328LL))(
           *((_QWORD *)v11 + 2),
           *((unsigned int *)v11 + 6),
           a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 500LL;
      goto LABEL_10;
    }
    v8 = v2[6];
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 464LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
         v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 506LL;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_12:
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v6;
}
