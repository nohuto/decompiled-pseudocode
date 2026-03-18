/*
 * XREFs of ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00748A0
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00741EC (xxxDCompSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00748A0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C00065BC (LayerHitTest.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00745DC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00748A0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 */

struct tagWND *__fastcall DCEChildTreeSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  struct tagPOINT *v5; // rbx
  __int64 i; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  struct tagWND *v11; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  struct tagPOINT v14; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT *v15; // [rsp+60h] [rbp+18h]
  struct _SUBPIXELS *v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v5 = a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
  {
    if ( *(_QWORD *)(i + 200) )
    {
      v14 = a2;
      if ( (unsigned int)DCEIsWindowHit((struct tagWND *)i, &v14, v16) )
      {
        *v5 = v14;
        goto LABEL_14;
      }
    }
    else
    {
      v8 = *(_QWORD *)(i + 40);
      v9 = (unsigned __int64)*v5;
      if ( (*(_BYTE *)(v8 + 31) & 0x10) != 0
        && (int)v9 >= *(_DWORD *)(v8 + 88)
        && (int)v9 < *(_DWORD *)(v8 + 96)
        && SHIDWORD(v9) >= *(_DWORD *)(v8 + 92)
        && SHIDWORD(v9) < *(_DWORD *)(v8 + 100) )
      {
        v10 = *(_QWORD *)(v8 + 168);
        if ( (!v10 || (unsigned int)GrePtInRegion(v10, (unsigned int)v9, HIDWORD(v9)))
          && ((*(_BYTE *)(*(_QWORD *)(i + 40) + 26LL) & 8) == 0 || LayerHitTest(i, v9)) )
        {
          v5 = v15;
LABEL_14:
          if ( !*(_QWORD *)(i + 88)
            || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*(_QWORD *)(i + 40) + 104LL, *v5)
            || (v11 = DCEChildTreeSpeedHitTest((struct tagWND *)i, a2, v5, v16), (a1 = v11) == 0LL)
            || v11 == (struct tagWND *)i )
          {
            a1 = (struct tagWND *)i;
          }
          break;
        }
      }
      v5 = v15;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  return a1;
}
