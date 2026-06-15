/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHH_NHHPEAPEAV1@@Z @ 0x180014400
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180014604 (--0CProcess@@IEAA@XZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHH_NHH@Z @ 0x1800148DC (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHH_NHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        HANDLE hObject,
        const unsigned __int16 *a7,
        int a8,
        const unsigned __int16 *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        bool a17,
        int a18,
        int a19,
        struct CProcess **a20)
{
  HANDLE ProcessHeap; // rax
  CProcess *v25; // rax
  volatile signed __int32 *v26; // rbx
  int v27; // edi

  ProcessHeap = GetProcessHeap();
  v25 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x330uLL);
  if ( v25 )
    v26 = (volatile signed __int32 *)CProcess::CProcess(v25);
  else
    v26 = 0LL;
  if ( !v26 )
  {
    v27 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids, v27);
    }
    AudPolicyLogError("CProcess::CreateInstance", 2693, v27);
    return (unsigned int)v27;
  }
  v27 = CProcess::Initialize(
          (CProcess *)v26,
          a1,
          a2,
          a3,
          a4,
          a5,
          hObject,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18,
          a19);
  if ( v27 >= 0 )
  {
    *a20 = (struct CProcess *)v26;
    v26 = 0LL;
  }
  if ( v26 && _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 32LL))(v26);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v26 + 24LL))(v26, 1LL);
  }
  if ( v27 < 0 )
    goto LABEL_12;
  return (unsigned int)v27;
}
