/*
 * XREFs of ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x180124170
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x180127A50 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x180124584 (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback(
        Windows::Internal::SpatialInteractions::HapticsEngine *this,
        double a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  double v4; // xmm6_8
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // eax
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v22 = v6;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 553LL;
LABEL_22:
    v15 = (unsigned int)v7;
    goto LABEL_23;
  }
  if ( !*((_BYTE *)this + 229) )
  {
    v11 = 1000 * v3;
    v12 = *((_QWORD *)this + 14);
    v13 = v21;
    if ( *(_BYTE *)(v12 + 40) )
    {
      v14 = 0LL;
    }
    else
    {
      *(_BYTE *)(v12 + 40) = 1;
      *(_QWORD *)(v12 + 16) = v13;
      *(double *)(v12 + 24) = a2;
      v16 = *(_QWORD *)(v12 + 8) / 2LL;
      if ( !*(_BYTE *)(v12 + 32) )
        v16 = *(_QWORD *)(v12 + 8);
      v14 = v13 + v16;
      v17 = (**(__int64 (__fastcall ***)(__int64, __int64))v12)(v12, v13);
      v8 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
          (const char *)(unsigned int)v17);
LABEL_13:
        if ( v8 < 0 )
        {
          v15 = (unsigned int)v8;
          v9 = 573LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
            (const char *)v15);
          goto LABEL_31;
        }
        if ( v14 )
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 64LL))(
                 *((_QWORD *)this + 15),
                 v14);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 576LL;
            goto LABEL_22;
          }
          *((_QWORD *)this + 24) = v14;
          if ( *((_BYTE *)this + 230) )
          {
            v4 = DOUBLE_1_0;
          }
          else if ( v11 )
          {
            v18 = *((_QWORD *)this + 25);
            if ( v11 < v18 )
              v4 = (double)(int)v11 / (double)(int)v18 * a2;
          }
          Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(this, v4, v21);
          *((_BYTE *)this + 231) = 1;
        }
        goto LABEL_30;
      }
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, v13, v11);
    goto LABEL_13;
  }
  v10 = *((_QWORD *)this + 15);
  if ( (_DWORD)v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, v21 + 1000 * v3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 559LL;
      goto LABEL_22;
    }
    *((_BYTE *)this + 231) = 1;
  }
  else
  {
    *((_BYTE *)this + 231) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
  }
  Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(this, a2, v21);
LABEL_30:
  v8 = 0;
LABEL_31:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v8;
}
