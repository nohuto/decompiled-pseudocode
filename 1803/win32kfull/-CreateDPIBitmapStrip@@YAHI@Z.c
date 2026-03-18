/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     CreateBitmapStrip @ 0x1C0054A80 (CreateBitmapStrip.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C000D420 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(unsigned int a1)
{
  struct OEMBITMAPSET *v1; // rbx
  unsigned int v2; // esi
  HDC v3; // r14
  __int64 result; // rax
  __int64 v5; // rdi
  __int16 *v6; // rbp
  __int64 v7; // r12
  __int16 *v8; // rdi
  __int16 v9; // ax
  LONG left; // ebx
  LONG v11; // r15d
  int v12; // r8d
  __int16 v13; // r9
  LONG v14; // eax
  HBRUSH v15; // r8
  unsigned int v16; // ebx
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  int DpiDependentMetric; // eax
  RECT v21; // [rsp+30h] [rbp-38h] BYREF
  char v22; // [rsp+78h] [rbp+10h] BYREF

  v1 = (struct OEMBITMAPSET *)(&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 95 * a1);
  if ( a1 )
    v2 = 24 * (a1 + 3);
  else
    v2 = *(unsigned __int16 *)(gpsi + 6998LL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  EnsureOemBitmapInfoForDpiSlot(v1, v2);
  result = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, 0LL);
  v5 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v3, v5);
    if ( *(_QWORD *)v1 )
      GreDeleteObject(*(_QWORD *)v1);
    *(_QWORD *)v1 = v5;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
    v6 = (__int16 *)&unk_1C02DCBB2;
    v7 = 93LL;
    v8 = (__int16 *)((char *)v1 + 16);
    do
    {
      v9 = v8[2];
      if ( v9 )
      {
        v11 = v8[1];
        v12 = (unsigned __int16)*(v6 - 1);
        v13 = *v6;
        v21.left = *v8;
        left = v21.left;
        v21.right = v21.left + v9;
        v14 = v11 + v8[3];
        v21.top = v11;
        v21.bottom = v14;
        if ( v12 == 0xFFFF )
        {
          if ( (v13 & 1) != 0 )
          {
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
            {
              if ( (v13 & 0x100) != 0 )
                v15 = *(HBRUSH *)(gpsi + 4720LL);
              else
                v15 = *(HBRUSH *)(gpsi + 4712LL);
            }
            else if ( (v13 & 0x100) != 0 )
            {
              v15 = *(HBRUSH *)(gpsi + 4920LL);
            }
            else
            {
              v15 = *(HBRUSH *)(gpsi + 4912LL);
            }
            FillRect(v3, &v21, v15);
            v16 = left + 2;
            v17 = v11 + 2;
            BitBltSysBmp(v3, v16, v17, 4u, 0);
            v18 = GetDpiDependentMetric(12LL, v2) - 2 + v16;
            BitBltSysBmp(v3, v18, v17, 0xEu, 0);
            v19 = GetDpiDependentMetric(12LL, v2) + v18;
            BitBltSysBmp(v3, v19, v17, 0, 0);
            DpiDependentMetric = GetDpiDependentMetric(12LL, v2);
            BitBltSysBmp(v3, v19 + DpiDependentMetric, v17, 0xBu, 0);
          }
        }
        else
        {
          DrawFrameControl(v3);
        }
      }
      v8 += 4;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
    return 1LL;
  }
  return result;
}
