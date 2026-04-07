/*
 * XREFs of ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800395F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018130 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmTopVisual::CloneVisualTree(
        UdwmTopVisual *this,
        struct CVisual **a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  int inserted; // ebx
  _BYTE *v8; // rcx
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  CBaseObject *v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  LOBYTE(v12) = a5;
  inserted = CVisual::CloneVisualTree(this, a2);
  if ( inserted < 0 )
  {
    v11 = 163LL;
  }
  else
  {
    v8 = (_BYTE *)*((_QWORD *)this + 30);
    if ( !v8 || (v8[84] & 8) != 0 )
      return 0LL;
    v13 = 0LL;
    LOBYTE(v12) = 1;
    v9 = (*(__int64 (__fastcall **)(_BYTE *, CBaseObject **, _QWORD, _QWORD))(*(_QWORD *)v8 + 152LL))(
           v8,
           &v13,
           0LL,
           0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAB,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v9,
        v12);
    if ( !v13 )
      return 0LL;
    inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*a2 + 32), v13, 0LL, 0, 1);
    if ( v13 )
    {
      CBaseObject::Release(v13);
      v13 = 0LL;
    }
    if ( inserted >= 0 )
      return 0LL;
    v11 = 177LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)inserted,
    v12);
  return (unsigned int)inserted;
}
