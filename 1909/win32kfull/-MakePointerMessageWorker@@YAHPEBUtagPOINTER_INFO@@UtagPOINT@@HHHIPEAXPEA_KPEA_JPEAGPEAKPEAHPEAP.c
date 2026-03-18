/*
 * XREFs of ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1F10
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1E30 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     GetDPITransformationMonitor @ 0x1C01E6CD0 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall MakePointerMessageWorker(
        const struct tagPOINTER_INFO *a1,
        struct tagPOINT a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8,
        __int64 *a9,
        unsigned __int16 *a10,
        unsigned int *a11,
        int *a12,
        HWND *a13)
{
  int v13; // ebx
  unsigned int v17; // esi
  unsigned __int16 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  HWND v26; // rdx
  __int64 DPITransformationMonitor; // [rsp+20h] [rbp-10h] BYREF
  __int64 v28; // [rsp+60h] [rbp+30h] BYREF

  v13 = 0;
  v28 = 0LL;
  v17 = 1;
  if ( !a1 )
    return 0LL;
  v19 = *((_WORD *)a1 + 2);
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetAdjustedPointerPixelLocation)(
                        *((_QWORD *)a1 + 4),
                        a2,
                        &v28) )
    v28 = *((_QWORD *)a1 + 4);
  LOBYTE(v20) = 1;
  v22 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 3), v20, v21);
  if ( v22 && (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(v28, v22);
    PhysicalToLogicalDPIPoint(&v28, &v28, 0LL, &DPITransformationMonitor);
  }
  if ( a6 <= 0x24B )
  {
    if ( a6 != 587 )
    {
      if ( a6 == 528 )
      {
        v24 = ((unsigned __int64)v19 << 16) | 0x246;
        goto LABEL_18;
      }
      if ( a6 > 0x240 )
      {
        if ( a6 <= 0x243 )
        {
          v23 = a3;
LABEL_17:
          v24 = v19 | (unsigned __int64)(v23 << 16);
LABEL_18:
          *a8 = v24;
          *a9 = (unsigned __int16)v28 | (unsigned __int64)(WORD2(v28) << 16);
          goto LABEL_31;
        }
        if ( a6 <= 0x244 || a6 == 584 )
          return 0;
LABEL_27:
        v23 = *((_WORD *)a1 + 6) & 0xE1F7;
        goto LABEL_17;
      }
      return 0;
    }
    v25 = v19 | ((unsigned __int64)a3 << 16);
    goto LABEL_30;
  }
  if ( a6 == 588 )
  {
    v25 = v19;
LABEL_30:
    *a8 = v25;
    *a9 = (__int64)a7;
    goto LABEL_31;
  }
  if ( a6 == 592 )
  {
    v24 = v19;
    goto LABEL_18;
  }
  if ( a6 > 0x250 )
  {
    if ( a6 <= 0x252 )
      goto LABEL_27;
    if ( a6 == 595 )
    {
LABEL_31:
      *a10 = *((_WORD *)a1 + 2);
      *a11 = *(_DWORD *)a1;
      if ( a4 || a5 )
        v13 = 1;
      v26 = (HWND)*((_QWORD *)a1 + 3);
      *a12 = v13;
      *a13 = v26;
      return v17;
    }
  }
  return 0;
}
