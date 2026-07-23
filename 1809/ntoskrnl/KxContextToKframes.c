/*
 * XREFs of KxContextToKframes @ 0x14008A770
 * Callers:
 *     KiInitializeContextThread @ 0x14008A008 (KiInitializeContextThread.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 * Callees:
 *     RtlXRestoreS @ 0x1401422F8 (RtlXRestoreS.c)
 *     KiCopyXStateArea @ 0x1402944F0 (KiCopyXStateArea.c)
 */

char __fastcall KxContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  char v6; // r15
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int16 v13; // ax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // r8
  _QWORD *SparePtr; // rcx
  _QWORD *v28; // rdx

  v6 = 0;
  if ( (a4 & 0x100001) == 0x100001 )
  {
    v10 = *(_DWORD *)(a3 + 68);
    if ( a5 )
      v11 = v10 & 0x210DD5 | 0x200;
    else
      v11 = v10 & 0x210FD5;
    *(_DWORD *)(a1 + 376) = v11;
    v12 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v12;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a5 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v13 = 35;
      v14 = *(_WORD *)(a3 + 56) == 51;
      if ( *(_WORD *)(a3 + 56) == 51 )
        v13 = 51;
      *(_WORD *)(a1 + 368) = v13;
      if ( v14 )
        v12 = v12 << 16 >> 16;
      else
        v12 = (unsigned int)v12;
    }
    else
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
    }
    *(_QWORD *)(a1 + 360) = v12;
  }
  if ( (a4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(a3 + 160);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a3 + 144);
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a3 + 168);
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a3 + 176);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a3 + 216);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 224);
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a3 + 232);
    *(_QWORD *)(a2 + 304) = *(_QWORD *)(a3 + 240);
  }
  if ( (a4 & 0x100040) == 0x100040 && a5 == 1 )
  {
    v26 = *(int *)(a3 + 1248) + a3 + 720;
    SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
    if ( SparePtr )
    {
      v28 = (_QWORD *)*SparePtr;
      if ( *SparePtr )
      {
        do
        {
          SparePtr = v28;
          v28 = (_QWORD *)*v28;
        }
        while ( v28 );
      }
      SparePtr = (_QWORD *)SparePtr[5];
    }
    if ( SparePtr )
      KiCopyXStateArea(SparePtr, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, v26);
    else
      RtlXRestoreS(
        *(int *)(a3 + 1248) + a3 + 720,
        (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( (a4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    if ( a5 == 1 )
    {
      v6 = 1;
      *(_DWORD *)(a3 + 280) = _mm_getcsr();
      *(_WORD *)(a3 + 256) &= 0x1F3Fu;
    }
  }
  if ( (a4 & 0x100010) == 0x100010 )
  {
    v15 = *(_QWORD *)(a3 + 72);
    if ( a5 )
    {
      v16 = 0LL;
      if ( v15 <= 0x7FFFFFFEFFFFLL )
        v16 = *(_QWORD *)(a3 + 72);
      v15 = v16;
    }
    *(_QWORD *)(a1 + 216) = v15;
    v17 = *(_QWORD *)(a3 + 80);
    if ( a5 )
    {
      v18 = 0LL;
      if ( v17 <= 0x7FFFFFFEFFFFLL )
        v18 = *(_QWORD *)(a3 + 80);
      v17 = v18;
    }
    *(_QWORD *)(a1 + 224) = v17;
    v19 = *(_QWORD *)(a3 + 88);
    if ( a5 )
    {
      v20 = 0LL;
      if ( v19 <= 0x7FFFFFFEFFFFLL )
        v20 = *(_QWORD *)(a3 + 88);
      v19 = v20;
    }
    *(_QWORD *)(a1 + 232) = v19;
    v21 = *(_QWORD *)(a3 + 96);
    if ( a5 )
    {
      v22 = 0LL;
      if ( v21 <= 0x7FFFFFFEFFFFLL )
        v22 = *(_QWORD *)(a3 + 96);
      v21 = v22;
    }
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 240) = v21;
    v23 = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
    *(_QWORD *)(a1 + 256) = v23;
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (v23 & 0x355) != 0 )
        _interlockedbittestandset(&CurrentThread->Header.Lock, 0x18u);
      else
        _interlockedbittestandreset(&CurrentThread->Header.Lock, 0x18u);
    }
  }
  return v6;
}
