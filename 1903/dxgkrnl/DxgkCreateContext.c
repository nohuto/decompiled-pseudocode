/*
 * XREFs of DxgkCreateContext @ 0x1C0123590
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C011F6CC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0120978 (-GetBitCount@@YAII@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r13
  int v14; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r15d
  _QWORD *v28; // rsi
  char *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  size_t v33; // r8
  unsigned int v34; // r8d
  ULONG64 v35; // r12
  int v36; // r8d
  int v37; // r9d
  int v38; // r10d
  _DWORD *v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  _DWORD *v43; // rdx
  _QWORD *v44; // rdx
  _DWORD *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  const GUID *v54; // r8
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  struct DXGDEVICE *v58; // [rsp+50h] [rbp-1C8h] BYREF
  int v59; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v60; // [rsp+60h] [rbp-1B8h]
  char v61; // [rsp+68h] [rbp-1B0h]
  __int64 v62; // [rsp+70h] [rbp-1A8h]
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v63; // [rsp+78h] [rbp-1A0h]
  _QWORD v64[2]; // [rsp+80h] [rbp-198h] BYREF
  size_t Size; // [rsp+90h] [rbp-188h]
  struct DXGDEVICE *v66; // [rsp+98h] [rbp-180h] BYREF
  _QWORD *v67; // [rsp+A0h] [rbp-178h]
  ULONG64 v68; // [rsp+A8h] [rbp-170h]
  struct DXGCONTEXT *v69; // [rsp+B0h] [rbp-168h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v70[4]; // [rsp+C0h] [rbp-158h]
  void *Src[2]; // [rsp+D0h] [rbp-148h]
  __int128 v72; // [rsp+E0h] [rbp-138h]
  __int128 v73; // [rsp+F0h] [rbp-128h]
  __int128 v74; // [rsp+100h] [rbp-118h]
  __int128 v75; // [rsp+110h] [rbp-108h]
  int v76; // [rsp+120h] [rbp-F8h]
  int v77; // [rsp+124h] [rbp-F4h]
  ULONG64 v78; // [rsp+128h] [rbp-F0h]
  __int64 v79; // [rsp+130h] [rbp-E8h]
  __int64 v80; // [rsp+138h] [rbp-E0h]
  __int64 v81; // [rsp+140h] [rbp-D8h]
  _BYTE v82[160]; // [rsp+150h] [rbp-C8h] BYREF

  v68 = a1;
  v78 = a1;
  v59 = -1;
  v60 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v61 = 1;
    v59 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v59, 2039LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v70[0].0 = *v9;
    *(_OWORD *)Src = v9[1];
    v72 = v9[2];
    v73 = v9[3];
    v74 = v9[4];
    v75 = v9[5];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v70[0].Value, Current, &v66);
    v13 = v66;
    if ( v66 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL) + 1912LL) & 1) != 0 )
      {
        v14 = 0;
        Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v70[2].Value;
        while ( 1 )
        {
          Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&Value >> 1);
          if ( !*(_DWORD *)&Value )
            break;
          ++v14;
        }
        if ( (unsigned int)GetBitCount(v70[2].Value) > 1 || (unsigned int)v18 >= *(_DWORD *)(v19 + 256) )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
          v56[3] = v70[2].Value;
        }
        else
        {
          v20 = 352LL * (unsigned int)v18;
          v21 = *(unsigned __int16 *)(v20 + *(_QWORD *)(v19 + 2440));
          v22 = v70[1].Value;
          v63 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v70[1].Value;
          if ( v70[1].Value < (unsigned int)v21 )
            goto LABEL_13;
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v21, v18);
          v56[3] = v22;
        }
        LODWORD(v51) = -1073741811;
        v56[4] = -1073741811LL;
      }
      else
      {
        v51 = v70[1].Value;
        v63 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v70[1].Value;
        if ( !v70[1].Value && !v70[2].Value )
        {
LABEL_13:
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64, v13);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v13, 0, v23, 0);
          v27 = COREDEVICEACCESS::AcquireShared((__int64)v82, 0xFFFFFFFF, 0LL);
          if ( v27 < 0 )
          {
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
            if ( v64[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
            if ( !v58 )
              goto LABEL_43;
LABEL_41:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
LABEL_43:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v46);
            if ( v61 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v47, &EventProfilerExit, v48, v59);
            }
            return (unsigned int)v27;
          }
          v28 = 0LL;
          v67 = 0LL;
          v29 = (char *)Src[0];
          if ( Src[0] )
          {
            if ( LODWORD(Src[1]) )
            {
              Size = LODWORD(Src[1]);
              v28 = operator new[](LODWORD(Src[1]), 0x4B677844u, PagedPool);
              v67 = v28;
              if ( v28 )
              {
                v33 = Size;
                if ( &v29[Size] < v29 || (unsigned __int64)&v29[Size] > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v28, v29, v33);
                v34 = (unsigned int)v63;
                v35 = v68;
LABEL_21:
                v69 = 0LL;
                v27 = DXGDEVICE::CreateContext(
                        v13,
                        &v69,
                        v34,
                        v70[2].Value,
                        v70[3],
                        v28,
                        (unsigned int)Src[1],
                        SHIDWORD(Src[1]),
                        0);
                if ( v27 >= 0 )
                {
                  v36 = *((_DWORD *)v69 + 6);
                  v76 = v36;
                  v79 = *((_QWORD *)v69 + 7);
                  v80 = *((_QWORD *)v69 + 6);
                  v81 = *((_QWORD *)v69 + 11);
                  v37 = *((_DWORD *)v69 + 18);
                  v77 = v37;
                  v62 = *((_QWORD *)v69 + 15);
                  v38 = *((_DWORD *)v69 + 26);
                  LODWORD(Size) = v38;
                  v39 = (_DWORD *)(v35 + 32);
                  if ( v35 + 32 >= MmUserProbeAddress )
                    v39 = (_DWORD *)MmUserProbeAddress;
                  *v39 = v36;
                  v40 = (_QWORD *)(v35 + 40);
                  if ( v35 + 40 >= MmUserProbeAddress )
                    v40 = (_QWORD *)MmUserProbeAddress;
                  *v40 = v79;
                  v41 = (_QWORD *)(v35 + 48);
                  if ( v35 + 48 >= MmUserProbeAddress )
                    v41 = (_QWORD *)MmUserProbeAddress;
                  *v41 = v80;
                  v42 = (_QWORD *)(v35 + 56);
                  if ( v35 + 56 >= MmUserProbeAddress )
                    v42 = (_QWORD *)MmUserProbeAddress;
                  *v42 = v81;
                  v43 = (_DWORD *)(v35 + 64);
                  if ( v35 + 64 >= MmUserProbeAddress )
                    v43 = (_DWORD *)MmUserProbeAddress;
                  *v43 = v37;
                  v44 = (_QWORD *)(v35 + 72);
                  if ( v35 + 72 >= MmUserProbeAddress )
                    v44 = (_QWORD *)MmUserProbeAddress;
                  *v44 = v62;
                  v45 = (_DWORD *)(v35 + 80);
                  if ( v35 + 80 >= MmUserProbeAddress )
                    v45 = (_DWORD *)MmUserProbeAddress;
                  *v45 = v38;
                }
                operator delete[](v28);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
                if ( v64[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
                if ( !v58 )
                  goto LABEL_43;
                goto LABEL_41;
              }
              v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
              v57[3] = v13;
              v57[4] = Size;
              v51 = -1073741801LL;
              goto LABEL_74;
            }
          }
          else if ( !LODWORD(Src[1]) )
          {
            v34 = (unsigned int)v63;
            v35 = v68;
            goto LABEL_21;
          }
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
          v57[3] = v29;
          v57[4] = LODWORD(Src[1]);
          v51 = -1073741811LL;
LABEL_74:
          v57[5] = v51;
          WdLogEvent5_WdWarning(v57);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
          if ( v64[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
          goto LABEL_53;
        }
        v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v56[3] = v51;
        v56[4] = v70[2].Value;
        LODWORD(v51) = -1073741811;
        v56[5] = -1073741811LL;
      }
      WdLogEvent5_WdWarning(v56);
    }
    else
    {
      v55 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v55 + 24) = v70[0].Value;
      LODWORD(v51) = -1073741811;
      *(_QWORD *)(v55 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v55);
    }
LABEL_53:
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    goto LABEL_48;
  }
  v50 = WdLogNewEntry5_WdError(v7, v6, 0LL);
  LODWORD(v51) = -1073741811;
  *(_QWORD *)(v50 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v50);
LABEL_48:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v52);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v53, &EventProfilerExit, v54, v59);
  return (unsigned int)v51;
}
