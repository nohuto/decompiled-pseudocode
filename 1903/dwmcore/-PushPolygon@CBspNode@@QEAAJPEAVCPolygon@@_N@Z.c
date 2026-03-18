/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18025B7E8
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1802547EC (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18025B7E8 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18019E84C (--2CBspNode@@SAPEAX_K@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BDD74 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x18025B6F8 (-AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18025B7E8 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, bool a3)
{
  CPolygon **v4; // rcx
  int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // rcx
  LPVOID v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct CPolygon *v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v18; // [rsp+88h] [rbp+48h] BYREF

  v4 = (CPolygon **)*((_QWORD *)this + 4);
  v18 = 0LL;
  v7 = 0;
  v16 = 0LL;
  v17 = 0;
  if ( v4 == *((CPolygon ***)this + 5) )
  {
    CBspNode::AddPolygon(this, a2);
    return (unsigned int)v7;
  }
  v8 = CPolygon::CompareAndSplit(*v4, a2, (enum D2DVectorHelper::Relation *)&v17, &v18, &v16);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 136;
    goto LABEL_29;
  }
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v18 = a2;
    }
    else if ( v17 == 2 )
    {
      v16 = a2;
    }
  }
  else
  {
    CBspNode::AddPolygon(this, a2);
  }
  if ( !v18 )
    goto LABEL_19;
  v10 = (LPVOID)*((_QWORD *)this + 2);
  if ( v10 )
    goto LABEL_17;
  v10 = CBspNode::operator new();
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CBspNode::`vftable';
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_BYTE *)v10 + 56) = a3;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
LABEL_17:
    v8 = CBspNode::PushPolygon((CBspNode *)v10, v18, a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      v15 = 163;
      goto LABEL_29;
    }
LABEL_19:
    if ( !v16 )
      goto LABEL_30;
    v12 = (LPVOID)*((_QWORD *)this + 3);
    if ( !v12 )
    {
      v12 = CBspNode::operator new();
      if ( v12 )
      {
        *((_DWORD *)v12 + 2) = 0;
        *(_QWORD *)v12 = &CBspNode::`vftable';
        *((_QWORD *)v12 + 4) = 0LL;
        *((_QWORD *)v12 + 5) = 0LL;
        *((_QWORD *)v12 + 6) = 0LL;
        *((_BYTE *)v12 + 56) = a3;
        _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      }
      else
      {
        v12 = 0LL;
      }
      *((_QWORD *)this + 3) = v12;
      if ( !v12 )
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0xABu, 0LL);
        goto LABEL_30;
      }
    }
    v8 = CBspNode::PushPolygon((CBspNode *)v12, v16, a3);
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_30;
    v15 = 173;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v15, 0LL);
    goto LABEL_30;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0xA1u, 0LL);
LABEL_30:
  if ( v17 == 3 )
  {
    if ( v18 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v18 + 8LL))(v18);
    if ( v16 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  if ( v7 < 0 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)this + 2);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 3);
  }
  return (unsigned int)v7;
}
