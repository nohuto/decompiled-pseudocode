/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18008BA20
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801C3FEC (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDR.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180080598 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180089BCC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18008B9E4 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  int v4; // edi
  int v5; // esi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // r13
  char v12; // cl
  int v13; // edx
  int v14; // r8d
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+60h] [rbp+8h]

  v1 = (__int64 *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  v4 = 0;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v17 = (unsigned int)v3;
    v8 = 2LL;
    do
    {
      v9 = CPtrArrayBase::operator[](v1, v7);
      v11 = v9;
      if ( v9 )
      {
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, v9);
        v12 = *(_BYTE *)(v11 + 272);
        *(_QWORD *)(v11 + 80) = 0LL;
        v13 = v4 + *(_DWORD *)(v11 + 264);
        v14 = v5 + *(_DWORD *)(v11 + 268);
        v4 = v13 + 1;
        v5 = v14 + 1;
        if ( (v12 & 1) == 0 )
          v4 = v13;
        if ( (v12 & 2) == 0 )
          v5 = v14;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
        v15 = (unsigned __int64 *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (*v1 & 2) != 0 )
          v16 = *v15;
        else
          v16 = *v1 & 1;
        if ( v6 >= v16 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, -2147024809, 0x139u, 0LL);
        }
        else if ( v16 == 1 )
        {
          *v1 = 1LL;
        }
        else
        {
          v15[v8] = 0LL;
        }
        v10 = v17;
      }
      ++v7;
      ++v6;
      ++v8;
      v17 = v10 - 1;
    }
    while ( v10 != 1 );
  }
  if ( (*v1 & 2) != 0 )
    operator delete((void *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL));
  *v1 = 0LL;
  CVisual::PropagateBackdropUpdates(this, -v4, -v5);
  CVisual::PropagateFlags(this, 5LL);
}
