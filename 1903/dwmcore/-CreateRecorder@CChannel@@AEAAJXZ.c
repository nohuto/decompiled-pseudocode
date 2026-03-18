/*
 * XREFs of ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180041CD8
 * Callers:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18003FA2C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18003FB70 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18003FCE0 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK_N@Z @ 0x180041150 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x1800412D0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x180041450 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180042078 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::CreateRecorder(CChannel *this)
{
  struct CCommandBatch **v1; // rdi
  int v2; // ebx
  PSLIST_ENTRY v3; // rax
  unsigned int v4; // ecx
  PSLIST_ENTRY v5; // rcx
  struct _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v7; // r9
  PSLIST_ENTRY v8; // r8
  struct _SLIST_ENTRY **v9; // r10
  int v10; // eax
  unsigned int v11; // ecx

  v1 = (struct CCommandBatch **)((char *)this + 160);
  v2 = 0;
  v3 = InterlockedPopEntrySList((PSLIST_HEADER)(*((_QWORD *)this + 6) + 192LL));
  if ( v3 )
  {
    v5 = v3 - 4;
    Next = v3[-4].Next;
    if ( Next != &v3[-4] )
    {
      v7 = (struct _SLIST_ENTRY **)*((_QWORD *)&v5->Next + 1);
      if ( *(&Next->Next + 1) != v5
        || *v7 != v5
        || (*v7 = Next,
            v8 = v5 + 1,
            *((_QWORD *)&Next->Next + 1) = v7,
            v9 = (struct _SLIST_ENTRY **)*((_QWORD *)&v5[1].Next + 1),
            *(&v5[1].Next->Next + 1) != &v5[1])
        || *v9 != v8
        || *(&Next->Next->Next + 1) != Next
        || *v7 != Next )
      {
        __fastfail(3u);
      }
      *v9 = Next;
      *((_QWORD *)&v5[1].Next + 1) = *((_QWORD *)&Next->Next + 1);
      **((_QWORD **)&Next->Next + 1) = v8;
      *((_QWORD *)&Next->Next + 1) = v9;
    }
    *((_QWORD *)&v5->Next + 1) = v5;
    v5->Next = v5;
    v5[2].Next = 0LL;
    *((_DWORD *)&v5[2].Next + 2) = 0;
    *((_DWORD *)&v5[2].Next + 3) = 0;
    v5[3].Next = 0LL;
    *((_DWORD *)&v5[3].Next + 2) = 0;
    *v1 = (struct CCommandBatch *)v5;
  }
  else
  {
    v10 = CCommandBatch::Create(v4, v1);
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20Bu, 0LL);
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x11Cu, 0LL);
  }
  return (unsigned int)v2;
}
