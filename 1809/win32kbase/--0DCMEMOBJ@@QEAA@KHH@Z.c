/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C00F6574
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     HmgModifyHandleType @ 0x1C0043D00 (HmgModifyHandleType.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00713AC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, unsigned int a2, int a3)
{
  struct HOBJ__ *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct HOBJ__ *v10; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // r9
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  HPALETTE *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rax
  _QWORD *v22; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a2 <= 2 )
  {
    v6 = HmgAlloc(0x868uLL, 1u, 0x11u);
    *(_QWORD *)this = v6;
    v10 = v6;
    if ( v6 )
    {
      if ( *((_WORD *)v6 + 6) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(*(_QWORD *)this + 2136LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
      if ( a3 )
        HmgModifyHandleType(*(_QWORD *)v10 | 0x210000LL);
      v12 = 3LL;
      v13 = (_OWORD *)((char *)v10 + 544);
      v14 = &DcAttrDefault;
      v15 = 3LL;
      do
      {
        *v13 = *v14;
        v13[1] = v14[1];
        v13[2] = v14[2];
        v13[3] = v14[3];
        v13[4] = v14[4];
        v13[5] = v14[5];
        v13[6] = v14[6];
        v13 += 8;
        v16 = v14[7];
        v14 += 8;
        *(v13 - 1) = v16;
        --v15;
      }
      while ( v15 );
      *v13 = *v14;
      v13[1] = v14[1];
      v17 = v14[2];
      *((_QWORD *)v10 + 122) = (char *)v10 + 544;
      v18 = &dclevelDefault;
      v13[2] = v17;
      v19 = (_OWORD *)((char *)v10 + 80);
      do
      {
        *v19 = *(_OWORD *)v18;
        v19[1] = *((_OWORD *)v18 + 1);
        v19[2] = *((_OWORD *)v18 + 2);
        v19[3] = *((_OWORD *)v18 + 3);
        v19[4] = *((_OWORD *)v18 + 4);
        v19[5] = *((_OWORD *)v18 + 5);
        v19[6] = *((_OWORD *)v18 + 6);
        v19 += 8;
        v20 = *((_OWORD *)v18 + 7);
        v18 += 16;
        *(v19 - 1) = v20;
        --v12;
      }
      while ( v12 );
      *v19 = *(_OWORD *)v18;
      v19[1] = *((_OWORD *)v18 + 1);
      v19[2] = *((_OWORD *)v18 + 2);
      v19[3] = *((_OWORD *)v18 + 3);
      v19[4] = *((_OWORD *)v18 + 4);
      INC_SHARE_REF_CNT(*(struct _BASEOBJECT **)(*(_QWORD *)this + 136LL));
      INC_SHARE_REF_CNT(*(struct _BASEOBJECT **)(*(_QWORD *)this + 144LL));
      INC_SHARE_REF_CNT(*(struct _BASEOBJECT **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v10 + 8) = a2;
      *(_QWORD *)((char *)v10 + 36) = 0LL;
      *((_DWORD *)v10 + 11) = 0;
      *((_QWORD *)v10 + 150) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v21 = *(_QWORD *)this + 176LL;
      *((_QWORD *)v10 + 221) = 0LL;
      *((_QWORD *)v10 + 158) = v21;
      *((_QWORD *)v10 + 175) = v21;
      *((_QWORD *)v10 + 192) = v21;
      *((_QWORD *)v10 + 209) = v21;
      *((_QWORD *)v10 + 219) = 0LL;
      *((_DWORD *)v10 + 440) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2100LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2096LL) = -1;
      v22 = (_QWORD *)(*(_QWORD *)this + 1112LL);
      if ( *(_QWORD *)this != -1112LL )
      {
        *(_QWORD *)(*(_QWORD *)this + 1120LL) = 0LL;
        *v22 = &CPushLock::`vftable';
        v22[2] = 0LL;
      }
      *((_QWORD *)v10 + 143) = 0LL;
      *((_QWORD *)v10 + 260) = 0LL;
      *((_QWORD *)v10 + 261) = 0LL;
    }
  }
  return this;
}
