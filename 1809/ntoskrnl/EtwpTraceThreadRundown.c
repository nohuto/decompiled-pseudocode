/*
 * XREFs of EtwpTraceThreadRundown @ 0x14017C40C
 * Callers:
 *     EtwpThreadRundownApc @ 0x140313E30 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140313E68 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x1407269F0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1400B5BE0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400B6B40 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6F8 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // r14
  char v4; // r15
  int v5; // ebx
  __int16 v6; // di
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int16 *v15; // rax
  char v17; // cl
  void *v18; // rcx
  unsigned __int16 v19; // dx
  unsigned __int64 v20; // rax
  _DWORD v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int64 v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  char v30; // [rsp+A4h] [rbp-64h]
  char PagePriorityThread; // [rsp+A5h] [rbp-63h]
  char IoPriorityThread; // [rsp+A6h] [rbp-62h]
  char v33; // [rsp+A7h] [rbp-61h]
  _QWORD v34[2]; // [rsp+B0h] [rbp-58h] BYREF
  void *v35; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-40h]
  void *v37; // [rsp+D0h] [rbp-38h]
  __int64 v38; // [rsp+D8h] [rbp-30h]

  v2 = 2;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_BYTE *)(a2 + 105);
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 104) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v21[0] = *(_DWORD *)(a1 + 1592);
  v21[1] = *(_DWORD *)(a1 + 1600);
  v22 = *(_QWORD *)(a1 + 56);
  v23 = *(_QWORD *)(a1 + 48);
  v26 = *(_QWORD *)(a1 + 576);
  v27 = *(_QWORD *)(a1 + 1680);
  v7 = *(_QWORD *)(a1 + 240);
  v24 = 0LL;
  v25 = 0LL;
  v28 = v7;
  v29 = 0;
  v30 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(v8);
  v33 = v9;
  if ( (*(_BYTE *)(v10 + 1752) & 8) != 0 )
  {
    v17 = v33;
    if ( *(_QWORD *)(v10 + 1544) != v10 + 1544 )
      v17 = 1;
    v33 = v17;
  }
  if ( v11 && v4 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 1064LL);
    if ( v12 && ((v14 = *(_WORD *)(v12 + 8), v14 == 332) || v14 == 452) )
    {
      v29 = *(_DWORD *)(v11 + 12128);
      v24 = *(unsigned int *)(v11 + 8196);
      v13 = *(unsigned int *)(v11 + 8200);
    }
    else
    {
      v29 = *(_DWORD *)(v11 + 5920);
      v24 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
    }
    v25 = v13;
  }
  v34[0] = v21;
  v34[1] = 72LL;
  v15 = *(unsigned __int16 **)(v10 + 2000);
  if ( v15 && (v18 = (void *)*((_QWORD *)v15 + 1)) != 0LL )
  {
    v19 = *v15;
    v20 = 2048LL;
    if ( v19 < 0x800u )
      v20 = v19;
    v35 = v18;
    v36 = __PAIR64__(v9, v20);
    if ( !(_DWORD)v20 || *((_WORD *)v18 + (v20 >> 1) - 1) != (_WORD)v9 )
    {
      v37 = &EtwpNull;
      v38 = 2LL;
      v2 = 3;
    }
  }
  else
  {
    v35 = &EtwpNull;
    v36 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(*(_QWORD *)(v3 + 1080), (unsigned int)v34, v10, *(_DWORD *)v3, v2, v6, v5);
}
