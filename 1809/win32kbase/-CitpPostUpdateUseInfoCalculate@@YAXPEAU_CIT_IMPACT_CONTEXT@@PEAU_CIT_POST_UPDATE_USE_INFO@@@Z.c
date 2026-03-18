/*
 * XREFs of ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0078370
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0077D70 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0077EF8 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00360A8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C00787A4 (-Citp100NSToMS@@YAI_K@Z.c)
 */

void __fastcall CitpPostUpdateUseInfoCalculate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_POST_UPDATE_USE_INFO *a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d

  *(_OWORD *)a2 = *((_OWORD *)a1 + 18);
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 19);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 20);
  *((_OWORD *)a2 + 3) = *((_OWORD *)a1 + 21);
  *((_OWORD *)a2 + 4) = *((_OWORD *)a1 + 22);
  *((_OWORD *)a2 + 5) = *((_OWORD *)a1 + 23);
  *((_OWORD *)a2 + 6) = *((_OWORD *)a1 + 24);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = MEMORY[0xFFFFF780000003B0];
  v6 = MEMORY[0xFFFFF78000000008];
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 188), v4);
  v7 = *(_QWORD *)((char *)a1 + 204);
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 212), v4);
  v8 = *(_QWORD *)((char *)a1 + 228);
  *((_DWORD *)a2 + 17) += HIDWORD(v7) & 0x7FFFFFFF;
  v9 = (unsigned int)v7 / 0x3E8;
  *((_DWORD *)a2 + 3) += v9;
  *((_DWORD *)a2 + 23) += v9;
  *((_QWORD *)a2 + 10) += v9;
  *((_DWORD *)a2 + 4) += (unsigned int)v8 / 0x3E8;
  *((_DWORD *)a2 + 5) += (unsigned int)v8 / 0x3E8;
  *((_DWORD *)a2 + 9) += ((int)v4 - dword_1C01D0D18) / 0x3E8u;
  v10 = Citp100NSToMS(v6 - qword_1C01D0D08 - v5);
  *((_DWORD *)a2 + 10) += (unsigned int)((v10 * (unsigned __int64)v11) >> 32) >> 6;
  *((_DWORD *)a2 + 11) += *((unsigned __int16 *)a1 + 124);
  *((_DWORD *)a2 + 12) += *((unsigned __int16 *)a1 + 126);
  *((_DWORD *)a2 + 13) += *((unsigned __int16 *)a1 + 125);
  *((_DWORD *)a2 + 14) += *((unsigned __int16 *)a1 + 128);
  *((_DWORD *)a2 + 15) += (unsigned int)((*((unsigned int *)a1 + 71) * (unsigned __int64)v11) >> 32) >> 6;
  *((_DWORD *)a2 + 16) += *((_DWORD *)a1 + 70);
  *((_QWORD *)a2 + 9) = MEMORY[0xFFFFF78000000014];
}
