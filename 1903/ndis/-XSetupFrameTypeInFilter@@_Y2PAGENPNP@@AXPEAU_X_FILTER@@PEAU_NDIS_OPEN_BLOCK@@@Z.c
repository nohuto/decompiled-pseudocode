/*
 * XREFs of ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012BF38
 * Callers:
 *     XNoteFilterOpenAdapter @ 0x1C0026E74 (XNoteFilterOpenAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rdi
  char v4; // si
  unsigned int FrameTypeArraySize; // ecx
  int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  _NDIS_FRAME_TYPE_AND_OPEN *v10; // rcx
  char v11; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      11,
      (struct _GUID *)&WPP_455e6ec7be243e99bf49db867d0b5220_Traceguids,
      v11);
  }
  FrameTypeArraySize = v2->FrameTypeArraySize;
  if ( !FrameTypeArraySize
    || (LODWORD(a2) = a1->FrameTypeRecord.NumEntries, (unsigned int)a2 + FrameTypeArraySize < FrameTypeArraySize)
    || (unsigned int)a2 + FrameTypeArraySize >= 0x10 )
  {
LABEL_22:
    v2->FilterNextOpen = a1->NoFTypeOpenList;
    ++a1->NumNoETypeOpens;
    a1->NoFTypeOpenList = v2;
    goto LABEL_17;
  }
  v6 = 0;
  if ( (_DWORD)a2 )
  {
    do
    {
      v7 = 0LL;
      while ( v2->FrameTypeArray[v7] != a1->FrameTypeRecord.Entry[v6].Type )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= FrameTypeArraySize )
          goto LABEL_10;
      }
      v4 = 1;
LABEL_10:
      if ( v4 == 1 )
        goto LABEL_22;
    }
    while ( ++v6 < (unsigned int)a2 );
  }
  v8 = 0LL;
  do
  {
    v9 = v2->FrameTypeArray[v8];
    v10 = &a1->FrameTypeRecord.Entry[(unsigned int)a2];
    if ( v9 == 8 && (_DWORD)a2 )
    {
      v10->Type = a1->FrameTypeRecord.Entry[0].Type;
      v10->Open = a1->FrameTypeRecord.Entry[0].Open;
      a1->FrameTypeRecord.Entry[0].Type = 8;
      a1->FrameTypeRecord.Entry[0].Open = v2;
    }
    else
    {
      v10->Type = v9;
      v10->Open = v2;
    }
    ++a1->FrameTypeRecord.NumEntries;
    v8 = (unsigned int)(v8 + 1);
    LODWORD(a2) = a1->FrameTypeRecord.NumEntries;
  }
  while ( (unsigned int)v8 < v2->FrameTypeArraySize );
  v2->FilterNextOpen = a1->FTypeOpenList;
  a1->FTypeOpenList = v2;
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      12,
      (struct _GUID *)&WPP_455e6ec7be243e99bf49db867d0b5220_Traceguids,
      (char)v2);
  }
}
