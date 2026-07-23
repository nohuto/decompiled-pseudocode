/*
 * XREFs of MiLogReserveVaFailed @ 0x14084F334
 * Callers:
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     PsGetProcessSessionId @ 0x140092250 (PsGetProcessSessionId.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall MiLogReserveVaFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *v4; // rax
  _KPROCESS *Process; // rbx
  int v10; // ett
  const struct _TlgProvider_t *v11; // r10
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  int Flink; // [rsp+80h] [rbp-88h] BYREF
  __int16 ProcessSessionId; // [rsp+84h] [rbp-84h]
  __int16 v23; // [rsp+86h] [rbp-82h]
  struct _LIST_ENTRY *v24; // [rsp+88h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *p_Flink; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  unsigned __int64 *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  unsigned __int64 *v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  unsigned __int64 *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  __int64 *v41; // [rsp+108h] [rbp+0h]
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  int v45; // [rsp+120h] [rbp+18h]
  int v46; // [rsp+124h] [rbp+1Ch]
  __int64 *v47; // [rsp+128h] [rbp+20h]
  int v48; // [rsp+130h] [rbp+28h]
  int v49; // [rsp+134h] [rbp+2Ch]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v4 = (struct _LIST_ENTRY *)&retaddr;
  if ( hProvider )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw((char *)Process[2].ActiveProcessors.Bitmap + 4);
    LODWORD(v4) = HIDWORD(Process[2].ActiveProcessors.Bitmap[0]);
    do
    {
      v10 = (int)v4;
      LODWORD(v4) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)Process[2].ActiveProcessors.Bitmap + 1,
                      (unsigned int)v4 | 0x800,
                      (signed __int32)v4);
    }
    while ( v10 != (_DWORD)v4 );
    if ( ((unsigned __int16)v4 & 0x800) == 0 )
    {
      Flink = (int)Process[1].Header.WaitListHead.Flink;
      ProcessSessionId = PsGetProcessSessionId((__int64)Process);
      v23 = MEMORY[0xFFFFF780000002C4];
      v4 = Process[1].ThreadListHead.Flink;
      v24 = v4;
      if ( hProvider->LevelPlus1 > 5 )
      {
        LOBYTE(v4) = TlgKeywordOn(hProvider, 0x400000000000uLL);
        if ( (_BYTE)v4 )
        {
          v12 = Process[1].Affinity.Bitmap[1];
          v28 = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v40 = 0;
          v43 = 0;
          v46 = 0;
          v49 = 0;
          v15 = v12;
          v16 = Process[1].Affinity.Bitmap[0];
          v17 = Process[1].ActiveProcessors.Bitmap[18];
          p_Flink = &Flink;
          v29 = &v14;
          v32 = &v15;
          v35 = &v16;
          v38 = &v17;
          v41 = &v18;
          v44 = &v19;
          v47 = &v20;
          v14 = a1;
          v18 = a2;
          v19 = a3;
          v20 = a4;
          v27 = 16;
          v30 = 8;
          v33 = 8;
          v36 = 8;
          v39 = 8;
          v42 = 8;
          v45 = 8;
          v48 = 8;
          LOBYTE(v4) = TlgWriteEx(v11, &unk_14036EC81, 0LL, 1u, 0LL, 0LL, 0xAu, &pData);
        }
      }
    }
  }
  return (char)v4;
}
