/*
 * XREFs of ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x1800F4660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x180057D48 (--1-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800F394C (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1801007B8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::`vector deleting destructor'(MPCSixDofProcessor *this, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx

  std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>((__int64)this + 4720);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)this + 520);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)this + 519);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 518);
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 517);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 516);
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 515);
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 514);
  if ( v8 )
    (**v8)(v8, 1LL);
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 513);
  if ( v9 )
    (**v9)(v9, 1LL);
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 512);
  if ( v10 )
    (**v10)(v10, 1LL);
  *((_DWORD *)this + 939) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1288);
  return this;
}
