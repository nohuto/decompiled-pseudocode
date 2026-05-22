/*
 * XREFs of ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18009FA40 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?GetSignaledHandle@AggregateWaitHandle@@QEAAJPEAPEAX@Z @ 0x18009FB58 (-GetSignaledHandle@AggregateWaitHandle@@QEAAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x18009FE08 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 *     ?DispatchEndpointStatusCallback@SipcEndpoint@@QEAAXW4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800A16DC (-DispatchEndpointStatusCallback@SipcEndpoint@@QEAAXW4SIPC_ENDPOINT_STATUS@@@Z.c)
 *     ?Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z @ 0x1800A1CC8 (-Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SipcServer::DispatchNextCallback(unsigned __int64 this)
{
  AggregateWaitHandle *v2; // r14
  __int64 result; // rax
  void *v4; // rax
  void **v5; // rcx
  void *v6; // rsi
  _DWORD *v7; // rax
  SipcServer *v8; // rax
  unsigned __int64 *v9; // rbx
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  unsigned __int64 *i; // rbx
  int v13; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]
  void *v18; // [rsp+80h] [rbp+20h] BYREF

  v2 = (AggregateWaitHandle *)(this + 88);
  result = AggregateWaitHandle::GetSignaledHandle((void **)(this + 88), &v18);
  if ( (int)result >= 0 )
  {
    v4 = (void *)(*(__int64 (__fastcall **)(void *))(**(_QWORD **)(this + 80) + 72LL))(*(void **)(this + 80));
    v6 = v18;
    if ( v18 == v4 )
    {
      result = (*(__int64 (__fastcall **)(void *, int *))(**(_QWORD **)(this + 80) + 64LL))(*(void **)(this + 80), &v13);
      if ( (int)result >= 0 )
      {
        switch ( v13 )
        {
          case 0:
            return AggregateWaitHandle::AddHandle(v2, v6);
          case 2:
            v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
            v11 = v10;
            if ( v10 )
              memset_0(v10, 0, 0x20uLL);
            else
              v11 = 0LL;
            *(_QWORD *)(this + 160) = v11;
            if ( !v11 )
            {
              wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
              return 2147942414LL;
            }
            v11[6] = (_DWORD)v14;
            *(_DWORD *)(*(_QWORD *)(this + 160) + 28LL) = HIDWORD(v14);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(this + 168))(
              *(_QWORD *)(this + 176),
              this & ((unsigned __int128)-(__int128)(this - 16) >> 64),
              (unsigned int)v14,
              HIDWORD(v14));
            if ( *(_QWORD *)(this + 160) )
            {
              (*(void (__fastcall **)(void *))(**(_QWORD **)(this + 80) + 16LL))(*(void **)(this + 80));
              operator delete(*(void **)(this + 160), (const struct std::nothrow_t *)0x20);
              *(_QWORD *)(this + 160) = 0LL;
            }
            return AggregateWaitHandle::AddHandle(v2, v6);
          case 3:
            v8 = *(SipcServer **)(this + 136);
            if ( v8 != (SipcServer *)(this + 136) )
            {
              v9 = v14;
              while ( v8 != (SipcServer *)v14 )
              {
                v8 = *(SipcServer **)v8;
                if ( v8 == (SipcServer *)(this + 136) )
                  return AggregateWaitHandle::AddHandle(v2, v6);
              }
              SipcEndpoint::DispatchEndpointStatusCallback(v14[2], 0);
              SipcServer::Disconnect((SipcServer *)(this - 16), (struct SipcEndpoint *)v9[2]);
            }
            return AggregateWaitHandle::AddHandle(v2, v6);
        }
        if ( v13 != 4 )
          return 2147549183LL;
        v7 = *(_DWORD **)(this + 136);
        if ( v7 != (_DWORD *)(this + 136) )
        {
          while ( v7[6] != v16 || v7[7] != v17 )
          {
            v7 = *(_DWORD **)v7;
            if ( v7 == (_DWORD *)(this + 136) )
              goto LABEL_13;
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64 *, __int64))(*((_QWORD *)v7 + 2) + 144LL))(
            *(_QWORD *)(*((_QWORD *)v7 + 2) + 152LL),
            -(__int64)(*((_QWORD *)v7 + 2) != 0LL) & (*((_QWORD *)v7 + 2) + 16LL),
            v14,
            v15);
          return AggregateWaitHandle::AddHandle(v2, v6);
        }
LABEL_13:
        result = (*(__int64 (__fastcall **)(void *, unsigned __int64 *))(**(_QWORD **)(this + 80) + 40LL))(
                   *(void **)(this + 80),
                   v14);
        if ( (int)result >= 0 )
          return AggregateWaitHandle::AddHandle(v2, v6);
      }
    }
    else if ( v18 )
    {
      for ( i = *(unsigned __int64 **)(this + 136); ; i = (unsigned __int64 *)*i )
      {
        if ( i == (unsigned __int64 *)(this + 136) )
        {
          wil::details::in1diag0::FailFast_Unexpected((wil::details::in1diag0 *)v5);
          JUMPOUT(0x1800A21FCLL);
        }
        v5 = (void **)i[2];
        if ( v5[16] == v18 )
          break;
      }
      SipcEndpoint::DispatchEndpointStatusCallback((unsigned __int64)v5, 1u);
      if ( (int)AggregateWaitHandle::AddHandle(v2, v6) < 0 )
      {
        SipcEndpoint::DispatchEndpointStatusCallback(i[2], 0);
        SipcServer::Disconnect((SipcServer *)(this - 16), (struct SipcEndpoint *)i[2]);
      }
      return 0LL;
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
