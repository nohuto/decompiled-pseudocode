/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001E5A0
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001F54C (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800202E8 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // edi
  int v6; // r13d
  struct IUnknown *v7; // rcx
  __int16 *v8; // r15
  __int16 v9; // cx
  int v10; // eax
  __int16 v11; // ax
  __int64 v12; // r8
  __int16 v13; // r12
  __int64 v14; // rsi
  int v15; // ebx
  __int16 v17; // ax
  struct IUnknown *v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  char v21; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  struct IUnknown *v23; // [rsp+A8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = *a1;
  v5 = 0;
  v18 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         &v18);
  if ( v6 >= 0 )
  {
    v7 = v23;
    if ( v23 != v18 )
    {
      ATL::AtlComQIPtrAssign(&v23, v18, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v7 = v23;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v7->lpVtbl[1].QueryInterface)(v7, &v21);
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v18->lpVtbl[1].QueryInterface)(
             v18,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v19);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 72LL))(v19, &pv);
          if ( v6 >= 0 )
          {
            v8 = (__int16 *)pv;
            v9 = *(_WORD *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_18;
            do
            {
              v10 = v5 + 1;
              if ( v9 != 35 )
                v10 = v5;
              v5 = v10;
              if ( v10 == 2 )
              {
                v17 = v8[1];
                for ( ++v8; v17 != 35; ++v8 )
                {
                  if ( !v17 )
                    break;
                  v17 = v8[1];
                }
                v5 = 3;
              }
              v11 = _o_towlower();
              v12 = *a2;
              v13 = v11;
              v14 = *(int *)(*a2 - 16);
              v15 = v14 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12) - (v14 + 1)) | (1 - *(_DWORD *)(*a2 - 8))) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a2, (unsigned int)v15);
                v12 = *a2;
              }
              *(_WORD *)(v12 + 2LL * (unsigned int)v14) = v13;
              if ( v15 < 0 || v15 > *(_DWORD *)(*a2 - 12) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16) = v15;
              ++v8;
              *(_WORD *)(*a2 + 2 * v14 + 2) = 0;
              v9 = *v8;
            }
            while ( *v8 );
          }
        }
      }
    }
  }
  v8 = (__int16 *)pv;
LABEL_18:
  if ( v8 )
  {
    CoTaskMemFree(v8);
    pv = 0LL;
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToMigratedString", 250, v6);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  return (unsigned int)v6;
}
