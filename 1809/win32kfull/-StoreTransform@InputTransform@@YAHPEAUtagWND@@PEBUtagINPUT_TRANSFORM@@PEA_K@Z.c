/*
 * XREFs of ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002358
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0002170 (EditionUpdateInputTransformFromHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C00024E0 (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

struct _EX_PUSH_LOCK *__fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  struct _EX_PUSH_LOCK *result; // rax
  struct _EX_PUSH_LOCK *v11; // rbx
  __int64 v12; // rdx
  __int128 v13; // xmm1
  struct tagWND *v14; // rax
  __int64 TopLevelWindow; // rax
  __int64 v16; // rdi
  float *v17; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 Source1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]

  v4 = *((_QWORD *)this + 5);
  v6 = *((_OWORD *)a2 + 1);
  Source1 = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  v20 = v6;
  v9 = *((_OWORD *)a2 + 3);
  v21 = v8;
  v22 = v9;
  if ( (*(_DWORD *)(v4 + 288) & 0xF) != 2 )
  {
    v14 = (unsigned int)IsIndependentInputWindow(this) ? GetCompositionInputWindowUIOwner(this) : this;
    TopLevelWindow = GetTopLevelWindow(v14);
    v16 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v17 = *(float **)(TopLevelWindow + 200);
      if ( v17 )
      {
        if ( *v17 != v17[5] )
          MicrosoftTelemetryAssertTriggeredMsgKM("A DPI transform must have the same X/Y scale.");
        if ( *((float *)&Source1 + 2) != 0.0
          || *((float *)&Source1 + 3) != 0.0
          || *((float *)&v20 + 2) != 0.0
          || *((float *)&v20 + 3) != 0.0
          || *(float *)&v21 != 0.0
          || *((float *)&v21 + 1) != 0.0
          || *((float *)&v21 + 2) != 1.0
          || *((float *)&v21 + 3) != 0.0
          || *((float *)&v22 + 2) != 0.0
          || *((float *)&v22 + 3) != 1.0 )
        {
          MicrosoftTelemetryAssertTriggeredMsgKM("We're only currently handling transforms with a scale, rotation, and offset.");
        }
        *(float *)&Source1 = *(float *)&Source1 / **(float **)(v16 + 200);
        *((float *)&Source1 + 1) = *((float *)&Source1 + 1) / **(float **)(v16 + 200);
        *(float *)&v20 = *(float *)&v20 / **(float **)(v16 + 200);
        *((float *)&v20 + 1) = *((float *)&v20 + 1) / **(float **)(v16 + 200);
        *(float *)&v22 = *(float *)&v22 - *(float *)(*(_QWORD *)(v16 + 200) + 48LL);
        *((float *)&v22 + 1) = *((float *)&v22 + 1) - *(float *)(*(_QWORD *)(v16 + 200) + 52LL);
        *(float *)&v22 = *(float *)&v22 / **(float **)(v16 + 200);
        *((float *)&v22 + 1) = *((float *)&v22 + 1) / **(float **)(v16 + 200);
      }
    }
  }
  result = InitInputTransformList(this);
  v11 = result;
  if ( result )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, result);
    v12 = *((_QWORD *)v11 + 1);
    if ( (struct _EX_PUSH_LOCK *)v12 == (struct _EX_PUSH_LOCK *)((char *)v11 + 8)
      || (!a3 || *(_QWORD *)(v12 + 16) != *(_QWORD *)a3)
      && ((*((_DWORD *)v11 + 22) & 1) != 0 || RtlCompareMemory(&Source1, (const void *)(v12 + 24), 0x40uLL) != 64) )
    {
      *(_OWORD *)((char *)v11 + 24) = Source1;
      *(_OWORD *)((char *)v11 + 40) = v20;
      *(_OWORD *)((char *)v11 + 56) = v21;
      v13 = v22;
      *((_DWORD *)v11 + 22) |= 1u;
      *(_OWORD *)((char *)v11 + 72) = v13;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
    return (struct _EX_PUSH_LOCK *)1;
  }
  return result;
}
