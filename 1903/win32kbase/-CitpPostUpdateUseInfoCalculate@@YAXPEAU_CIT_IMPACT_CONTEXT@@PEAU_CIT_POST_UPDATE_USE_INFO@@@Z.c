/*
 * XREFs of ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0086858
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0085F30 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00865E0 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C003999C (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C0086A74 (-Citp100NSToMS@@YAI_K@Z.c)
 */

void __fastcall CitpPostUpdateUseInfoCalculate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_POST_UPDATE_USE_INFO *a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d

  *(_OWORD *)a2 = *(_OWORD *)((char *)a1 + 296);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a1 + 312);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)a1 + 328);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)a1 + 344);
  *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)a1 + 360);
  *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)a1 + 376);
  *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)a1 + 392);
  *((_QWORD *)a2 + 14) = *((_QWORD *)a1 + 51);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = MEMORY[0xFFFFF780000003B0];
  v6 = MEMORY[0xFFFFF78000000008];
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 192), v4);
  v7 = *((_QWORD *)a1 + 26);
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 216), v4);
  v8 = *((_QWORD *)a1 + 29);
  v9 = (unsigned int)v7 / 0x3E8;
  *((_DWORD *)a2 + 3) += v9;
  *((_DWORD *)a2 + 25) += v9;
  *((_QWORD *)a2 + 11) += v9;
  *((_DWORD *)a2 + 18) += HIDWORD(v7) & 0x7FFFFFFF;
  *((_DWORD *)a2 + 4) += (unsigned int)v8 / 0x3E8;
  *((_DWORD *)a2 + 5) += (unsigned int)v8 / 0x3E8;
  *((_DWORD *)a2 + 9) += ((int)v4 - dword_1C0218838) / 0x3E8u;
  v10 = Citp100NSToMS(v6 - qword_1C0218828 - v5);
  *((_DWORD *)a2 + 10) += (unsigned int)((v10 * (unsigned __int64)v11) >> 32) >> 6;
  *((_DWORD *)a2 + 11) += *((unsigned __int16 *)a1 + 124);
  *((_DWORD *)a2 + 12) += *((unsigned __int16 *)a1 + 126);
  *((_DWORD *)a2 + 13) += *((unsigned __int16 *)a1 + 125);
  *((_DWORD *)a2 + 14) += *((unsigned __int16 *)a1 + 128);
  *((_DWORD *)a2 + 15) += *((unsigned __int16 *)a1 + 131);
  *((_DWORD *)a2 + 16) += (unsigned int)((*((unsigned int *)a1 + 72) * (unsigned __int64)v11) >> 32) >> 6;
  *((_DWORD *)a2 + 17) += *((_DWORD *)a1 + 71);
  *((_QWORD *)a2 + 10) = MEMORY[0xFFFFF78000000014];
}
