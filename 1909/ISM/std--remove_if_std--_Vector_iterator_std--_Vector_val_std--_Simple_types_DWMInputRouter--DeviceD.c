/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_DWMInputRouter::DeviceDisplayMapping_______lambda_94b99de26b03220c9be9e61ba1968402___ @ 0x1800C1E98
 * Callers:
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800C2C50 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _lambda_94b99de26b03220c9be9e61ba1968402_::operator()_DWMInputRouter::DeviceDisplayMapping_ @ 0x1800C17F0 (_lambda_94b99de26b03220c9be9e61ba1968402_--operator()_DWMInputRouter--DeviceDisplayMapping_.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x1800C202C (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 */

int **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_DWMInputRouter::DeviceDisplayMapping_______lambda_94b99de26b03220c9be9e61ba1968402___(
        int **a1,
        int *a2,
        int *a3,
        int a4)
{
  int *i; // rdi
  ContextualProcessorInitialState *v7; // rax
  const struct ContextualProcessorInitialState *v8; // rsi
  int *v9; // r14
  ContextualProcessorInitialState *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int **result; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a4;
  for ( i = a2; i != a3; i += 4 )
  {
    v7 = ContextualProcessorInitialState::ContextualProcessorInitialState(
           (ContextualProcessorInitialState *)v14,
           (const struct ContextualProcessorInitialState *)i);
    if ( lambda_94b99de26b03220c9be9e61ba1968402_::operator()_DWMInputRouter::DeviceDisplayMapping_(&v15, (__int64)v7) )
      break;
  }
  if ( i != a3 )
  {
    v8 = (const struct ContextualProcessorInitialState *)(i + 4);
    if ( i + 4 != a3 )
    {
      v9 = i + 6;
      do
      {
        v10 = ContextualProcessorInitialState::ContextualProcessorInitialState(
                (ContextualProcessorInitialState *)v14,
                v8);
        if ( !lambda_94b99de26b03220c9be9e61ba1968402_::operator()_DWMInputRouter::DeviceDisplayMapping_(
                &v16,
                (__int64)v10) )
        {
          *i = *(_DWORD *)v8;
          v11 = 0LL;
          if ( &v15 != v9 )
          {
            v11 = *(_QWORD *)v9;
            *(_QWORD *)v9 = 0LL;
          }
          v12 = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v11;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          i += 4;
        }
        v8 = (const struct ContextualProcessorInitialState *)((char *)v8 + 16);
        v9 += 4;
      }
      while ( v8 != (const struct ContextualProcessorInitialState *)a3 );
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
