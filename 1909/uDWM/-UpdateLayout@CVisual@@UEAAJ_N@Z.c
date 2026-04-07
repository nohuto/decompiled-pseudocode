/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800226B0
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x180022590 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x1800225F0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180022640 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x1800B3A50 (-UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmTopVisual@@UEAAJ_N@Z @ 0x1800B3B30 (-UpdateLayout@UdwmTopVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18000BB70 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  int v6; // ecx
  int v7; // edx
  unsigned __int64 v8; // r8
  int v9; // r15d
  unsigned __int64 v10; // r9
  int v11; // esi
  int v12; // r15d
  int v13; // eax
  int v15; // esi
  __int64 v16; // rcx
  void *v17; // [rsp+28h] [rbp-18h]
  char *v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-8h]
  __int16 v20; // [rsp+3Ch] [rbp-4h]
  __int64 v21; // [rsp+70h] [rbp+30h]
  unsigned __int64 v22; // [rsp+80h] [rbp+40h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( !v2 )
    goto LABEL_17;
  v6 = *((_DWORD *)this + 32);
  v7 = *((_DWORD *)this + 34);
  if ( v6 == 0x7FFFFFFF
    && *((_DWORD *)this + 33) == 0x7FFFFFFF
    && v7 == 0x7FFFFFFF
    && *((_DWORD *)this + 35) == 0x7FFFFFFF )
  {
    goto LABEL_17;
  }
  v9 = 0;
  v22 = *((_QWORD *)this + 15);
  v8 = v22;
  v10 = HIDWORD(v22);
  v11 = 0;
  v21 = 0LL;
  if ( *((_DWORD *)this + 33) == 0x7FFFFFFF )
  {
    if ( v6 != 0x7FFFFFFF )
      goto LABEL_6;
  }
  else
  {
    v12 = *(_DWORD *)(v2 + 120);
    if ( v6 != 0x7FFFFFFF )
    {
      LODWORD(v22) = v12 - *((_DWORD *)this + 33) - v6;
LABEL_6:
      LODWORD(v21) = v6;
      v9 = v6;
      goto LABEL_7;
    }
    v9 = v12 - v22 - *((_DWORD *)this + 33);
    LODWORD(v21) = v9;
  }
LABEL_7:
  if ( *((_DWORD *)this + 35) != 0x7FFFFFFF )
  {
    v15 = *(_DWORD *)(v2 + 124);
    if ( v7 == 0x7FFFFFFF )
    {
      v11 = v15 - v10 - *((_DWORD *)this + 35);
      HIDWORD(v21) = v11;
      goto LABEL_10;
    }
    HIDWORD(v22) = v15 - v7 - *((_DWORD *)this + 35);
    goto LABEL_9;
  }
  if ( v7 != 0x7FFFFFFF )
  {
LABEL_9:
    HIDWORD(v21) = v7;
    v11 = v7;
  }
LABEL_10:
  if ( (int)v22 <= 0 )
    LODWORD(v22) = 0;
  if ( SHIDWORD(v22) <= 0 )
    HIDWORD(v22) = 0;
  v13 = (*(__int64 (__fastcall **)(CVisual *, unsigned __int64 *, unsigned __int64, unsigned __int64))(*(_QWORD *)this + 96LL))(
          this,
          &v22,
          v8,
          v10);
  v3 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x115u, v17);
    return v3;
  }
  if ( v9 != *((_DWORD *)this + 28) || v11 != *((_DWORD *)this + 29) )
  {
    *((_QWORD *)this + 14) = v21;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
LABEL_17:
  if ( a2 )
  {
    v19 = -1;
    v18 = (char *)this + 32;
    v20 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v18) )
    {
      v16 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 8LL * v19);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 2LL);
    }
  }
  return v3;
}
