/*
 * XREFs of NtGdiGetDCObject @ 0x1C0099E10
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(HDC a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // esi
  __int64 *v10; // rax
  struct SURFACE *v11; // rcx
  _QWORD v12[6]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v13; // [rsp+58h] [rbp-19h] BYREF
  __int64 v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+70h] [rbp-1h]
  _QWORD v16[10]; // [rsp+78h] [rbp+7h] BYREF

  v3 = a2;
  v5 = 0LL;
  if ( (unsigned int)PsGetWin32KFilterSet(a1, a2, a3) != 5 || a1 != (HDC)-589410304LL )
  {
    DCOBJ::DCOBJ((DCOBJ *)v12, a1);
    v7 = (_QWORD *)v12[0];
    if ( v12[0] )
    {
      v8 = *(_QWORD *)(v12[0] + 976LL);
      v9 = *(_DWORD *)(v8 + 152);
      if ( (v9 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v12[0], *(_QWORD *)(v8 + 160));
        v7 = (_QWORD *)v12[0];
      }
      if ( (v9 & 0x2000) != 0 )
      {
        GreDCSelectPen(v7, *(_QWORD *)(v7[122] + 168LL));
        v7 = (_QWORD *)v12[0];
      }
      switch ( v3 )
      {
        case 0x50000:
          DCOBJ::DCOBJ((DCOBJ *)v16);
          v14 = 0LL;
          v13 = 0LL;
          v15 = 0;
          v16[0] = 0LL;
          memset(&v16[6], 0, 24);
          DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v13, (struct XDCOBJ *)v12);
          v11 = *(struct SURFACE **)(v12[0] + 496LL);
          if ( !v11 )
            v11 = SURFACE::pdibDefault;
          v5 = *((_QWORD *)v11 + 4);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v13);
          goto LABEL_24;
        case 0x80000:
          v5 = v7[10];
          goto LABEL_24;
        case 0xA0000:
          v5 = *(_QWORD *)(v7[122] + 296LL);
          goto LABEL_24;
        case 0x100000:
          v10 = (__int64 *)v7[17];
          goto LABEL_18;
      }
      if ( ((v3 - 3145728) & 0xFFDFFFFF) == 0 )
      {
        v10 = (__int64 *)v7[18];
LABEL_18:
        v5 = *v10;
      }
    }
LABEL_24:
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return v5;
  }
  if ( v3 == 655360 )
    return GreGetStockObject(13LL);
  else
    return 0LL;
}
