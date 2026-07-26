/*
 * XREFs of ndisDoDirectOidRequest @ 0x1C001DB3C
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisMDirectOidRequest @ 0x1C006B170 (ndisMDirectOidRequest.c)
 *     NdisFDirectOidRequest @ 0x1C008D6B0 (NdisFDirectOidRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisMDoDirectOidRequest @ 0x1C001D980 (ndisMDoDirectOidRequest.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025890 (WPP_RECORDER_SF_qqqq.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(_DWORD *a1, KSPIN_LOCK *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  KIRQL v9; // r15
  _QWORD *v10; // rbx
  int i; // edi
  int v12; // edx
  unsigned int v13; // ebx
  bool v15; // al
  _QWORD Parameter[14]; // [rsp+50h] [rbp-19h] BYREF
  int v17; // [rsp+D8h] [rbp+6Fh] BYREF

  v4 = 0LL;
  v17 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      44,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      (char)a2,
      a3,
      (char)a4);
  v9 = KeAcquireSpinLockRaiseToDpc(a2 + 12);
  a2[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( a3 )
    v10 = *(_QWORD **)(a3 + 704);
  else
    v10 = (_QWORD *)a2[332];
  if ( a4 )
  {
    if ( ndisReferenceRefEx(a4 + 39, 0x12u, &v17) )
    {
      if ( *(_QWORD *)(a4[2] + 296LL) )
      {
        v10 = a4;
      }
      else if ( a4[88] )
      {
        v10 = (_QWORD *)a4[88];
      }
      ndisDereferenceRef(a4 + 39, 0x12u);
      goto LABEL_33;
    }
    if ( v17 == 1 )
      goto LABEL_33;
    v13 = -1073741823;
    if ( v17 == 2 )
      v13 = -1073741670;
    a2[65] = 0LL;
    KeReleaseSpinLock(a2 + 12, v9);
    goto LABEL_14;
  }
  for ( i = v17; *(_BYTE *)v10 == 5; i = 0 )
  {
    v4 = v10;
    v15 = ndisReferenceRefEx(v10 + 39, 0x10u, &v17);
    i = v17;
    if ( v15 || v17 != 1 )
      break;
    v10 = (_QWORD *)v10[88];
    v4 = 0LL;
LABEL_33:
    v17 = 0;
  }
  a2[65] = 0LL;
  KeReleaseSpinLock(a2 + 12, v9);
  if ( !i )
  {
    if ( v4 && !*(_QWORD *)(v4[2] + 296LL) || !*(_QWORD *)(a2[470] + 248) )
    {
      v13 = -1073741637;
LABEL_39:
      if ( v4 )
        ndisDereferenceRef(v4 + 39, 0x10u);
      goto LABEL_15;
    }
    if ( v4 )
    {
      memset(Parameter, 0, 0x38uLL);
      Parameter[1] = v4;
      Parameter[3] = a1;
      v13 = -1073741670;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoDirectOidRequestInternal, Parameter, 0x4CCCuLL, 0, 0LL) >= 0 )
        v13 = Parameter[0];
    }
    else if ( (unsigned __int8)ndisReferenceMiniport((__int64)a2) )
    {
      v13 = ndisMDoDirectOidRequest((__int64)a2, a1, 0);
      ndisDereferenceMiniport((__int64)a2, 0x49u);
    }
    else
    {
      v13 = -1073741823;
    }
LABEL_14:
    if ( v13 == 259 )
      goto LABEL_15;
    goto LABEL_39;
  }
  v13 = -1073741823;
  v12 = -1073741670;
  if ( i == 2 )
    v13 = -1073741670;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      45,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      (char)a2,
      v13);
  }
  return v13;
}
