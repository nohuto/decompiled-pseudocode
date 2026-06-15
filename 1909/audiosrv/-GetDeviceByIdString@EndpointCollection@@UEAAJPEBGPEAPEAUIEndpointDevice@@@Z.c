/*
 * XREFs of ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x180146630
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180048988 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180145828 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EndpointCollection::GetDeviceByIdString(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  EndpointCollection *v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // edx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v5 = this;
  v6 = 0;
  v17[0] = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v8 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v9 = (*(__int64 (__fastcall **)(EndpointCollection *, _QWORD *))(*(_QWORD *)v5 + 64LL))(v5, v17);
      if ( v9 >= 0 )
      {
        while ( 1 )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v18);
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v17[0] + 24LL))(v17[0], &v18);
          if ( v9 < 0 )
            break;
          v7 = v18;
          if ( !v18 )
            goto LABEL_21;
          v16 = 0LL;
          pv = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v16);
          if ( v10 < 0
            || (v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v16 + 40LL))(v16, &pv), v10 < 0) )
          {
            v6 = v10;
            CoTaskMemFree(pv);
            pv = 0LL;
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            goto LABEL_25;
          }
          v11 = pv;
          v12 = (unsigned __int16 *)pv;
          do
          {
            v13 = *(unsigned __int16 *)((char *)v12 + a2 - (_BYTE *)pv);
            v14 = *v12 - v13;
            if ( v14 )
              break;
            ++v12;
          }
          while ( v13 );
          if ( !v14 )
          {
            v8 = 1;
            ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v18, a3);
            v11 = pv;
          }
          CoTaskMemFree(v11);
          pv = 0LL;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v7 = v18;
          if ( !v18 )
          {
            if ( v8 )
              goto LABEL_26;
LABEL_21:
            v6 = -2147023728;
            goto LABEL_26;
          }
          if ( v8 )
            goto LABEL_26;
        }
      }
      v6 = v9;
LABEL_25:
      v7 = v18;
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
LABEL_26:
  if ( v7 )
    (*(void (__fastcall **)(__int64, char *, EndpointCollection *))(*(_QWORD *)v7 + 16LL))(v7, a2, v5);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD, EndpointCollection *))(*(_QWORD *)v17[0] + 16LL))(
      v17[0],
      *(_QWORD *)v17[0],
      v5);
  return v6;
}
