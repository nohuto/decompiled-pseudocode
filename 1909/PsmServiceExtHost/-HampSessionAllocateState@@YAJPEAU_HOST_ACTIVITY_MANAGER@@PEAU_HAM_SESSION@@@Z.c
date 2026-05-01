/*
 * XREFs of ?HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x18003FF38
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18003FEA4 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x18004001C (--$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSessionAllocateState(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_SESSION *a2)
{
  HRESULT ClassObject; // ebx
  struct _HOST_ACTIVITY_MANAGER *v5; // [rsp+50h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+60h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  ClassObject = CoGetClassObject(
                  &GUID_38142214_ed63_4965_9214_1bbc06e130e9,
                  1u,
                  0LL,
                  &GUID_8e1bbbb9_b3d5_430d_b276_d0e7454caab2,
                  &v6);
  if ( ClassObject >= 0 )
  {
    ClassObject = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v6 + 24LL))(
                    v6,
                    *((unsigned int *)a2 + 22),
                    0LL,
                    &GUID_428d4ddd_3462_43df_9395_1eff13ae7a4b,
                    (char *)a2 + 112);
    if ( ClassObject >= 0 )
    {
      ClassObject = Microsoft::WRL::Details::MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(
                      (char *)a2 + 120,
                      &v5,
                      (char *)a2 + 88);
      if ( ClassObject >= 0 )
        ClassObject = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)a2 + 14) + 152LL))(
                        *((_QWORD *)a2 + 14),
                        *((_QWORD *)a2 + 15),
                        (char *)a2 + 128);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)ClassObject;
}
