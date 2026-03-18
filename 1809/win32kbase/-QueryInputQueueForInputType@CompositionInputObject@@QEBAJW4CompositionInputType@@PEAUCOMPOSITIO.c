/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0033DAC
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001E68 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0033BC0 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0034160 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00341F0 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(void *a1, int a2, __int64 a3)
{
  int v5; // ebp
  CInputSink *v6; // rdi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rcx
  int v12; // ebx
  CInputSink *v13; // [rsp+48h] [rbp+20h] BYREF

  v5 = CompositionInputObject::LockForRead(a1, &v13);
  if ( v5 >= 0 )
  {
    v6 = v13;
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v12 = v9 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_8;
            v10 = *((_QWORD *)v13 + 10);
          }
          else
          {
            v10 = *((_QWORD *)v13 + 9);
          }
        }
        else
        {
          v10 = *((_QWORD *)v13 + 8);
        }
      }
      else
      {
        v10 = *((_QWORD *)v13 + 7);
      }
    }
    else
    {
      v10 = *((_QWORD *)v13 + 6);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL))(v10, a3);
LABEL_8:
    CInputSink::UnlockAndRelease(v6);
  }
  return (unsigned int)v5;
}
