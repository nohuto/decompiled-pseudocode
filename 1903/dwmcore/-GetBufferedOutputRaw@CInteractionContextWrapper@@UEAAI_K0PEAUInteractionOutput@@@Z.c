/*
 * XREFs of ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180234100
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ResetInteractionOutput @ 0x1800C1E94 (_anonymous_namespace_--ResetInteractionOutput.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x180234A2C (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180234FD8 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180235520 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetBufferedOutputRaw(
        CInteractionContextWrapper *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct InteractionOutput *a4)
{
  unsigned int v4; // ebp
  struct InteractionOutput *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // r15
  LARGE_INTEGER v10; // r14
  LARGE_INTEGER *v11; // rsi
  bool v12; // zf
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+10h]
  unsigned __int64 v16; // [rsp+80h] [rbp+18h] BYREF
  struct InteractionOutput *v17; // [rsp+88h] [rbp+20h]

  v17 = a4;
  v15 = a2;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  if ( !a3 )
  {
    if ( QueryPerformanceCounter(&PerformanceCount)
      && (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CInteractionContextWrapper *)((char *)this + 624),
                         PerformanceCount.QuadPart,
                         &v16) )
    {
      v6 = v16;
    }
    else
    {
      v6 = 1000LL * GetTickCount();
    }
  }
  anonymous_namespace_::ResetInteractionOutput((__int64)v5, 0);
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 112LL))(this)
    && *((_DWORD *)this + 140) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
    v9 = CQueue<CBufferedInteractionOutput *>::PeekFirst((char *)this + 544, v8, &PerformanceCount);
    if ( v9 )
    {
      v10 = PerformanceCount;
      do
      {
        if ( *(_QWORD *)v10.QuadPart >= v15 && *(_QWORD *)v10.QuadPart < v6 )
        {
          CInteractionContextWrapper::_UpdateInteractionOutput(
            this,
            (const struct INTERACTION_CONTEXT_OUTPUT *)(v10.QuadPart + 12),
            v5);
          ++v4;
        }
        v10.QuadPart = 0LL;
        v11 = 0LL;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
        if ( v9 && *(CInteractionContextWrapper **)v9 != (CInteractionContextWrapper *)((char *)this + 544) )
        {
          v11 = *(LARGE_INTEGER **)v9;
          v10 = *(LARGE_INTEGER *)(*(_QWORD *)v9 + 16LL);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
        v12 = v11 == 0LL;
        v9 = (__int64)v11;
        v5 = v17;
      }
      while ( !v12 );
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
  }
  return v4;
}
