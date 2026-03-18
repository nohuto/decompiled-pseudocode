/*
 * XREFs of ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014C294
 * Callers:
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C79FC (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014B8A0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37___ @ 0x1C003F850 (DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37___.c)
 *     _DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C003F8F8 (_DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??1DispBrokerClientReference@@QEAA@XZ @ 0x1C003F914 (--1DispBrokerClientReference@@QEAA@XZ.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C02343C0 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall DispBrokerClient::SendDisplayBrokerMessage(
        DispBrokerClient *this,
        unsigned int a2,
        struct _PORT_MESSAGE *a3,
        struct _ALPC_MESSAGE_ATTRIBUTES *a4,
        struct _PORT_MESSAGE *a5,
        unsigned __int64 *a6,
        struct _ALPC_MESSAGE_ATTRIBUTES *a7,
        union _LARGE_INTEGER *a8)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _PORT_MESSAGE *v15; // r14
  struct _ALPC_MESSAGE_ATTRIBUTES *v16; // r12
  unsigned __int64 *v17; // rsi
  unsigned int v18; // ebx
  union _LARGE_INTEGER *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int128 v31; // [rsp+40h] [rbp-41h] BYREF
  struct _PORT_MESSAGE **v32; // [rsp+50h] [rbp-31h]
  __int128 v33; // [rsp+60h] [rbp-21h] BYREF
  struct _PORT_MESSAGE **v34; // [rsp+70h] [rbp-11h]
  struct _PORT_MESSAGE *v35; // [rsp+D0h] [rbp+4Fh] BYREF
  int v36; // [rsp+D8h] [rbp+57h] BYREF
  HANDLE *v37; // [rsp+E0h] [rbp+5Fh] BYREF
  struct _ALPC_MESSAGE_ATTRIBUTES *v38; // [rsp+E8h] [rbp+67h]

  v38 = a4;
  v35 = 0LL;
  *(_QWORD *)&v31 = &v36;
  *((_QWORD *)&v31 + 1) = this;
  v32 = &v35;
  v34 = &v35;
  v36 = -1073741811;
  v33 = v31;
  DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37_((__int64)&v31, (__int64)&v33);
  v13 = a2 & 0x20000;
  if ( v12 )
  {
    if ( *(_WORD *)(v12 + 2) < 0x40u )
    {
      v14 = WdLogNewEntry5_WdError(v13, v11, v12);
      *(_QWORD *)(v14 + 24) = a3->u1.s1.TotalLength;
      goto LABEL_8;
    }
    v15 = a5;
    v16 = a7;
    v17 = a6;
    v35 = a3;
    if ( a5 )
    {
      if ( !a6 )
      {
LABEL_7:
        v14 = WdLogNewEntry5_WdError(v13, v11, v12);
        *(_QWORD *)(v14 + 24) = 421LL;
        goto LABEL_8;
      }
    }
    else if ( a6 || a7 )
    {
      goto LABEL_7;
    }
    if ( !*((_BYTE *)this + 8) && *(_DWORD *)(v12 + 40) != 1 )
    {
      v18 = -1073741637;
      goto LABEL_9;
    }
    v20 = a8;
    if ( !(_DWORD)v13 )
    {
      if ( a5 )
      {
        v14 = WdLogNewEntry5_WdError(v13, v11, v12);
        *(_QWORD *)(v14 + 24) = 443LL;
        goto LABEL_8;
      }
      if ( a8 )
      {
        v14 = WdLogNewEntry5_WdError(v13, v11, v12);
        *(_QWORD *)(v14 + 24) = 452LL;
        goto LABEL_8;
      }
    }
    DispBrokerClient::ReferencePort(this, &v37);
    if ( v37 )
    {
      v25 = ZwAlpcSendWaitReceivePort(v37[1], a2, a3, v38, v15, v17, v16, v20);
      v36 = v25;
      v18 = v25;
      if ( v25 == 258 )
      {
        v36 = -1073741505;
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
        v29[3] = **(unsigned int **)this;
        v30 = v36;
        v29[5] = 0LL;
      }
      else
      {
        if ( v25 >= 0 )
        {
LABEL_28:
          DispBrokerClientReference::~DispBrokerClientReference(&v37);
          goto LABEL_9;
        }
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
        v29[3] = **(unsigned int **)this;
        v30 = v36;
        v29[5] = 1LL;
      }
      v29[4] = v30;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      v36 = -1073741772;
      v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = **(unsigned int **)this;
      *(_QWORD *)(v24 + 32) = v36;
      WdLogEvent5_WdWarning(v24);
    }
    v18 = v36;
    goto LABEL_28;
  }
  v14 = WdLogNewEntry5_WdError(v13, v11, 0LL);
  *(_QWORD *)(v14 + 24) = 402LL;
LABEL_8:
  WdLogEvent5_WdError(v14);
  v18 = v36;
LABEL_9:
  DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v31);
  return v18;
}
