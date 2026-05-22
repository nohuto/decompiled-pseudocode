/*
 * XREFs of ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x180022964
 * Callers:
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180025324 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputETW::DragNDrop::FeedPositionData(__int64 a1, __int64 a2, __int64 a3, struct tagPOINT a4)
{
  LONG x; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  struct tagPOINT v7; // [rsp+38h] [rbp-49h] BYREF
  __int64 v8; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+68h] [rbp-19h]
  int v11; // [rsp+70h] [rbp-11h]
  int v12; // [rsp+74h] [rbp-Dh]
  __int64 *v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+80h] [rbp-1h]
  int v15; // [rsp+84h] [rbp+3h]
  __int64 *v16; // [rsp+88h] [rbp+7h]
  int v17; // [rsp+90h] [rbp+Fh]
  int v18; // [rsp+94h] [rbp+13h]
  __int64 *v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A4h] [rbp+23h]
  struct tagPOINT *v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]
  __int64 v25; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+F8h] [rbp+77h] BYREF

  v27 = a3;
  v26 = a2;
  v25 = a1;
  x = a4.x;
  v7 = a4;
  v5 = (_DWORD *)*((_QWORD *)InputETW::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 > 1u )
    {
      v6 = *((_QWORD *)InputETW::Instance() + 1);
      if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v10 = &v25;
        v13 = &v26;
        v16 = &v27;
        v8 = x;
        v19 = &v8;
        v7 = (struct tagPOINT)v7.y;
        v22 = &v7;
        v11 = 8;
        v14 = 8;
        v17 = 8;
        v20 = 8;
        v23 = 8;
        TlgWrite((TraceLoggingHProvider)v6, &unk_180166594, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
