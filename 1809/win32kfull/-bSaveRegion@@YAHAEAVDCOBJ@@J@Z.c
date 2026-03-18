/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0056C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___ @ 0x1C015F458 (wil--details--lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___--_lambda_call__lambda_d150.c)
 *     DC::AcquireDcVisRgnExclusive @ 0x1C0162CA8 (DC--AcquireDcVisRgnExclusive.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // kr00_8
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  HDC v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v13; // [rsp+28h] [rbp-11h] BYREF
  int v14; // [rsp+30h] [rbp-9h]
  _QWORD v15[2]; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp+Fh] BYREF
  _BYTE v17[16]; // [rsp+68h] [rbp+2Fh] BYREF
  struct _RECTL v18; // [rsp+78h] [rbp+3Fh] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0;
  if ( a2 == 1 )
  {
    v5 = *(_QWORD *)(v2 + 512);
    v18.top = HIDWORD(v5);
    v18.right = v5;
    v18.left = 0;
    v18.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
    if ( v13 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
      }
      RGNOBJ::vSet((RGNOBJ *)&v13, &v18);
      DC::AcquireDcVisRgnExclusive(*(_QWORD *)a1, v17);
      *(_QWORD *)(*(_QWORD *)a1 + 1144LL) = v13;
      wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___(v17);
      if ( v14 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      return 1LL;
    }
    else
    {
      if ( v14 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      return 0LL;
    }
  }
  else
  {
    v8 = *(HDC *)(v2 + 112);
    v15[0] = 0LL;
    v15[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v16);
    XDCOBJ::vLock((XDCOBJ *)v15, v8);
    v9 = v15[0];
    if ( v15[0] )
    {
      v10 = *(_QWORD *)(v15[0] + 168LL);
      if ( v10 )
      {
        ++*(_DWORD *)(v10 + 32);
        v9 = v15[0];
      }
      v11 = *(_QWORD *)(v9 + 160);
      if ( v11 )
        ++*(_DWORD *)(v11 + 32);
      v3 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return v3;
  }
}
